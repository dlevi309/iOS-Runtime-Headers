/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
*/


@interface FLEnvironment : NSObject

@property (nonatomic,readonly) BOOL followUpExtensionSupportEnabled; 
@property (nonatomic,readonly) BOOL followUpZeroActionsForTheWorld; 
+(id)currentEnvironment;
-(BOOL)isInternal;
-(id)supportedBundleIdentifiers;
-(BOOL)isUnlocked;
-(BOOL)followUpExtensionSupportEnabled;
-(BOOL)stressMode;
-(id)stressBundleIdentifiers;
-(BOOL)shouldHideAllFollowUps;
-(BOOL)followUpZeroActionsForTheWorld;
-(void)setFollowUpExtensionSupportEnabled:(BOOL)arg1 ;
@end

