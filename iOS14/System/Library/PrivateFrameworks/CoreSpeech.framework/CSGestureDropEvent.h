/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/


@interface CSGestureDropEvent : NSObject {

	double _droppingPrediction;
	double _droppedPrediction;
	double _timestamp;

}

@property (nonatomic,readonly) double droppingPrediction;                       //@synthesize droppingPrediction=_droppingPrediction - In the implementation block
@property (nonatomic,readonly) double droppedPrediction;                        //@synthesize droppedPrediction=_droppedPrediction - In the implementation block
@property (nonatomic,readonly) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcObject; 
-(id)initWithXPCObject:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcObject;
-(double)timestamp;
-(id)toString;
-(id)initWithDroppingPrediction:(double)arg1 droppedPrediction:(double)arg2 timestamp:(double)arg3 ;
-(double)droppingPrediction;
-(double)droppedPrediction;
@end

