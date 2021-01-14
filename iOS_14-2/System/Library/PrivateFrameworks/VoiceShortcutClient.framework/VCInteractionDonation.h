/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <libobjc.A.dylib/VCActionDonation.h>

@class NSString, INInteraction, NSDate, INShortcut;

@interface VCInteractionDonation : NSObject <VCActionDonation> {

	NSString* _identifier;
	NSString* _sourceAppIdentifier;
	NSString* _title;
	NSString* _subtitle;
	INInteraction* _interaction;

}

@property (nonatomic,readonly) INInteraction * interaction;                                  //@synthesize interaction=_interaction - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;                          //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForDisplay; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForLaunching; 
@property (nonatomic,readonly) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullDescription; 
@property (nonatomic,copy,readonly) NSString * suggestedPhrase; 
@property (nonatomic,readonly) id uniqueProperty; 
@property (nonatomic,readonly) INShortcut * shortcut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)timestampDateFormatter;
-(id)initWithEvent:(id)arg1 ;
-(NSString *)subtitle;
-(NSString *)fullDescription;
-(INShortcut *)shortcut;
-(INInteraction *)interaction;
-(NSString *)sourceAppIdentifier;
-(unsigned long long)hash;
-(NSString *)sourceAppIdentifierForDisplay;
-(NSString *)sourceAppIdentifierForLaunching;
-(NSString *)suggestedPhrase;
-(id)uniqueProperty;
-(NSDate *)date;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 sourceAppIdentifier:(id)arg2 interaction:(id)arg3 ;
-(NSString *)title;
-(BOOL)isEqual:(id)arg1 ;
@end

