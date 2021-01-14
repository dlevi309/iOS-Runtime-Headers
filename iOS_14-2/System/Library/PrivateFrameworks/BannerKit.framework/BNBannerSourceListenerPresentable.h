/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
*/

@class FBProcess, FBScene;


@protocol BNBannerSourceListenerPresentable <BNPresentable>
@property (nonatomic,readonly) FBProcess * clientProcess; 
@property (nonatomic,readonly) FBScene * scene; 
@property (getter=isContentHosted,nonatomic,readonly) BOOL contentHosted; 
@required
-(FBScene *)scene;
-(FBProcess *)clientProcess;
-(BOOL)isContentHosted;

@end

