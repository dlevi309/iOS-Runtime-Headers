/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

