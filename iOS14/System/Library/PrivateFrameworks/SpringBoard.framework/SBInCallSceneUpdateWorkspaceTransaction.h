/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMainWorkspaceTransaction.h>

@class SBApplicationSceneEntity;

@interface SBInCallSceneUpdateWorkspaceTransaction : SBMainWorkspaceTransaction {

	SBApplicationSceneEntity* _applicationSceneEntity;
	/*^block*/id _postSceneUpdateHandler;

}

@property (nonatomic,copy) id postSceneUpdateHandler;              //@synthesize postSceneUpdateHandler=_postSceneUpdateHandler - In the implementation block
-(void)_begin;
-(id)initWithApplicationSceneEntity:(id)arg1 transitionRequest:(id)arg2 ;
-(void)setPostSceneUpdateHandler:(id)arg1 ;
-(id)postSceneUpdateHandler;
@end

