/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <libobjc.A.dylib/VCActionDonation.h>

@class NSString, NSDate, INShortcut, NSData;

@interface WFMockActionDonation : NSObject <VCActionDonation> {

	NSString* _sourceAppIdentifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _sourceAppIdentifierForLaunching;
	id _uniqueProperty;
	NSData* _actionData;

}

@property (nonatomic,copy,readonly) NSData * actionData;                                     //@synthesize actionData=_actionData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;                          //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForDisplay; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForLaunching;              //@synthesize sourceAppIdentifierForLaunching=_sourceAppIdentifierForLaunching - In the implementation block
@property (nonatomic,readonly) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullDescription; 
@property (nonatomic,copy,readonly) NSString * suggestedPhrase; 
@property (nonatomic,readonly) id uniqueProperty;                                            //@synthesize uniqueProperty=_uniqueProperty - In the implementation block
@property (nonatomic,readonly) INShortcut * shortcut; 
-(NSDate *)date;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)sourceAppIdentifier;
-(NSString *)subtitle;
-(NSString *)fullDescription;
-(INShortcut *)shortcut;
-(NSData *)actionData;
-(NSString *)sourceAppIdentifierForDisplay;
-(NSString *)sourceAppIdentifierForLaunching;
-(NSString *)suggestedPhrase;
-(id)uniqueProperty;
-(id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 actionData:(id)arg4 ;
@end

