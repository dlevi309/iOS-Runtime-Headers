/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardServices/SBSLockScreenContentAction.h>

@class SBApplicationSceneEntity;

@interface SBInProcessSecureAppAction : SBSLockScreenContentAction {

	SBApplicationSceneEntity* _applicationSceneEntity;

}

@property (nonatomic,retain) SBApplicationSceneEntity * applicationSceneEntity;              //@synthesize applicationSceneEntity=_applicationSceneEntity - In the implementation block
-(SBApplicationSceneEntity *)applicationSceneEntity;
-(id)initWithType:(unsigned long long)arg1 applicationSceneEntity:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)isInProcessAction;
-(void)setApplicationSceneEntity:(SBApplicationSceneEntity *)arg1 ;
@end

