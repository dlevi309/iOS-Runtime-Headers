/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/_SBCameraLaunchCondition.h>

@class NSArray;

@interface _SBAggregateCameraLaunchCondition : _SBCameraLaunchCondition {

	NSArray* _conditions;

}

@property (nonatomic,retain) NSArray * conditions;              //@synthesize conditions=_conditions - In the implementation block
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
-(BOOL)isMet;
@end

