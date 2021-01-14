/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class NSSet;


@protocol SBFSensorActivityDataProvider <NSObject>
@property (nonatomic,copy,readonly) NSSet * activeSensorActivityAttributions; 
@property (nonatomic,copy,readonly) id<SBFSensorActivityAttribution> mostRecentSensorActivityAttribution; 
@required
-(void)addObserver:(id)arg1;
-(NSSet *)activeSensorActivityAttributions;
-(void)removeObserver:(id)arg1;
-(id<SBFSensorActivityAttribution>)mostRecentSensorActivityAttribution;

@end

