/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSSet;


@protocol SBUIAnimationControllerTransitionContextProvider <NSObject>
@property (nonatomic,copy,readonly) NSSet * toApplicationSceneEntities; 
@property (nonatomic,copy,readonly) NSSet * fromApplicationSceneEntities; 
@required
-(NSSet *)fromApplicationSceneEntities;
-(NSSet *)toApplicationSceneEntities;

@end

