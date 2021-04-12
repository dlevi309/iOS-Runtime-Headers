/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAction.h>

@interface WFGetDistanceAction : WFAction
+(unsigned long long)transportTypeFromString:(id)arg1 ;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)getDirectDistanceFromOrigin:(id)arg1 toDestination:(id)arg2 ;
-(void)getDistanceFromOrigin:(id)arg1 toDestination:(id)arg2 transportType:(unsigned long long)arg3 ;
-(void)finishRunningWithDistance:(double)arg1 ;
-(BOOL)originIsCurrentLocation;
-(BOOL)destinationIsCurrentLocation;
-(BOOL)locationParameterIsCurrentLocation:(id)arg1 ;
-(id)noLocationError;
@end

