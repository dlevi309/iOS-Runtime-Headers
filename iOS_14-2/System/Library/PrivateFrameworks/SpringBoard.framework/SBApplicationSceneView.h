/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBSceneView.h>

@class SBApplicationSceneHandle, SBApplication;

@interface SBApplicationSceneView : SBSceneView

@property (nonatomic,readonly) SBApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) SBApplication * application; 
-(SBApplication *)application;
-(id)deviceApplicationSceneView;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4 ;
@end

