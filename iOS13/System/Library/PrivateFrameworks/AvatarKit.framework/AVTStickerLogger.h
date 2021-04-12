/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@protocol OS_os_log;
@class NSObject;

@interface AVTStickerLogger : NSObject {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)logRemovingShaderModifiers:(id)arg1 fromAvatar:(id)arg2 wereApplied:(BOOL)arg3 ;
-(void)logErrorShaderModifiers:(id)arg1 cantBeRemovedFromAvatar:(id)arg2 errors:(id)arg3 ;
-(void)logStartApplyConfiguration:(id)arg1 ;
-(void)logCompletedApplyConfiguration:(id)arg1 ;
-(void)logStartBuildingProp:(id)arg1 ;
-(void)logCompleteBuildingProp:(id)arg1 startedAt:(double)arg2 ;
-(void)logStartExport:(id)arg1 ;
-(void)logCompleteExport:(id)arg1 startedAt:(double)arg2 ;
-(void)logErrorBuildingProp:(id)arg1 ;
-(void)logConfigurationNotFoundForName:(id)arg1 ;
-(void)logErrorCreatingAssetReader:(id)arg1 ;
-(void)logShaderModifier:(id)arg1 appliedToAvatar:(id)arg2 material:(id)arg3 ;
-(void)logShaderModifier:(id)arg1 removedFromAvatar:(id)arg2 material:(id)arg3 ;
-(void)logShaderModifier:(id)arg1 notRemovedFromAvatar:(id)arg2 reason:(id)arg3 ;
@end

