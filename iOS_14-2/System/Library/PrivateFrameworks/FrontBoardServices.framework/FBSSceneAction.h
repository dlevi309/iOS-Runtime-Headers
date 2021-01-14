/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <BaseBoard/BSAction.h>

@class FBSScene, FBSSerialQueue;

@interface FBSSceneAction : BSAction {

	FBSScene* _scene;
	FBSSerialQueue* _callOutQueue;

}

@property (nonatomic,retain) FBSScene * scene;                           //@synthesize scene=_scene - In the implementation block
@property (nonatomic,retain) FBSSerialQueue * callOutQueue;              //@synthesize callOutQueue=_callOutQueue - In the implementation block
-(FBSScene *)scene;
-(void)setScene:(FBSScene *)arg1 ;
-(FBSSerialQueue *)callOutQueue;
-(void)setCallOutQueue:(FBSSerialQueue *)arg1 ;
@end

