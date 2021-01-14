/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <libobjc.A.dylib/VCActionDonation.h>

@class NSString, NSDate, INShortcut, NSUserActivity;

@interface VCUserActivityDonation : NSObject <VCActionDonation> {

	NSString* _identifier;
	NSString* _sourceAppIdentifier;
	NSDate* _date;
	INShortcut* _shortcut;
	NSDate* _endDate;

}

@property (nonatomic,copy,readonly) NSDate * endDate;                                        //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity; 
@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;                          //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForDisplay; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForLaunching; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * fullDescription; 
@property (nonatomic,copy,readonly) NSString * suggestedPhrase; 
@property (nonatomic,readonly) id uniqueProperty; 
@property (nonatomic,readonly) INShortcut * shortcut;                                        //@synthesize shortcut=_shortcut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)timestampDateFormatter;
-(NSUserActivity *)userActivity;
-(NSDate *)endDate;
-(id)initWithEvent:(id)arg1 ;
-(NSString *)subtitle;
-(NSString *)fullDescription;
-(INShortcut *)shortcut;
-(NSString *)sourceAppIdentifier;
-(unsigned long long)hash;
-(NSString *)sourceAppIdentifierForDisplay;
-(NSString *)sourceAppIdentifierForLaunching;
-(NSString *)suggestedPhrase;
-(id)uniqueProperty;
-(id)initWithUserActivity:(id)arg1 identifier:(id)arg2 sourceAppIdentifier:(id)arg3 date:(id)arg4 ;
-(id)dateString;
-(NSDate *)date;
-(NSString *)identifier;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

