/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@interface FLEnvironment : NSObject

@property (nonatomic,readonly) BOOL followUpExtensionSupportEnabled; 
@property (nonatomic,readonly) BOOL followUpZeroActionsForTheWorld; 
+(id)currentEnvironment;
-(BOOL)isInternal;
-(BOOL)isUnlocked;
-(BOOL)followUpExtensionSupportEnabled;
-(BOOL)stressMode;
-(id)stressBundleIdentifiers;
-(BOOL)shouldHideAllFollowUps;
-(BOOL)followUpZeroActionsForTheWorld;
-(void)setFollowUpExtensionSupportEnabled:(BOOL)arg1 ;
-(id)supportedBundleIdentifiers;
@end

