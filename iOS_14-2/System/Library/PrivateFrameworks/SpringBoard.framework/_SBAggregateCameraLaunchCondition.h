/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

