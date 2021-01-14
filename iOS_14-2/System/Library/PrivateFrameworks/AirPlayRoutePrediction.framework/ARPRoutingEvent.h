/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/


@class NSString, NSDateInterval, NSDictionary;

@interface ARPRoutingEvent : NSObject {

	NSString* _bundleID;
	NSString* _outputDeviceID;
	NSDateInterval* _interval;
	NSDictionary* _probabilityVector;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                      //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * outputDeviceID;                //@synthesize outputDeviceID=_outputDeviceID - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * interval;                //@synthesize interval=_interval - In the implementation block
@property (nonatomic,readonly) NSDictionary * probabilityVector;              //@synthesize probabilityVector=_probabilityVector - In the implementation block
+(id)mostRecentRoutingEventInDateInterval:(id)arg1 knowledgeStore:(id)arg2 eventLimit:(unsigned long long)arg3 longFormVideoFilter:(/*^block*/id)arg4 ;
-(NSDateInterval *)interval;
-(NSDictionary *)probabilityVector;
-(NSString *)outputDeviceID;
-(id)description;
-(NSString *)bundleID;
-(id)initWithBundleID:(id)arg1 outputDeviceID:(id)arg2 interval:(id)arg3 probabilityVector:(id)arg4 ;
@end

