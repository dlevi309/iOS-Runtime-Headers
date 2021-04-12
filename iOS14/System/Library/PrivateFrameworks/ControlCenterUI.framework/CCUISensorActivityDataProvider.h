/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@class NSSet, CCUISensorActivityData;

@interface CCUISensorActivityDataProvider : NSObject {

	NSSet* _activeSensorActivityData;
	CCUISensorActivityData* _mostRecentSensorActivityData;

}

@property (nonatomic,retain) NSSet * activeSensorActivityData;                                 //@synthesize activeSensorActivityData=_activeSensorActivityData - In the implementation block
@property (nonatomic,copy) CCUISensorActivityData * mostRecentSensorActivityData;              //@synthesize mostRecentSensorActivityData=_mostRecentSensorActivityData - In the implementation block
-(CCUISensorActivityData *)mostRecentSensorActivityData;
-(NSSet *)activeSensorActivityData;
-(void)setActiveSensorActivityData:(NSSet *)arg1 ;
-(void)setMostRecentSensorActivityData:(CCUISensorActivityData *)arg1 ;
@end

