/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

