/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
+(id)timestampDateFormatter;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(NSString *)identifier;
-(NSDate *)endDate;
-(NSString *)title;
-(NSString *)sourceAppIdentifier;
-(NSString *)subtitle;
-(id)initWithEvent:(id)arg1 ;
-(NSString *)fullDescription;
-(NSUserActivity *)userActivity;
-(INShortcut *)shortcut;
-(id)dateString;
-(NSString *)sourceAppIdentifierForDisplay;
-(NSString *)sourceAppIdentifierForLaunching;
-(NSString *)suggestedPhrase;
-(id)uniqueProperty;
-(id)initWithUserActivity:(id)arg1 identifier:(id)arg2 sourceAppIdentifier:(id)arg3 date:(id)arg4 ;
@end

