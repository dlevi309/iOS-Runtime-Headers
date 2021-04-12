/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARSensorData.h>

@class PRRelativePosition, PRPeer, NSString;

@interface ARProximityData : NSObject <ARSensorData> {

	double _timestamp;
	double _timestampLocalSync;
	double _timestampGlobalSync;
	PRRelativePosition* _measurement;
	PRPeer* _peer;
	unsigned long long _vioSessionID;

}

@property (assign,nonatomic) double timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double timestampLocalSync;                       //@synthesize timestampLocalSync=_timestampLocalSync - In the implementation block
@property (assign,nonatomic) double timestampGlobalSync;                      //@synthesize timestampGlobalSync=_timestampGlobalSync - In the implementation block
@property (nonatomic,readonly) PRRelativePosition * measurement;              //@synthesize measurement=_measurement - In the implementation block
@property (nonatomic,readonly) PRPeer * peer;                                 //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) unsigned long long vioSessionID;               //@synthesize vioSessionID=_vioSessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)timestamp;
-(PRRelativePosition *)measurement;
-(void)setTimestamp:(double)arg1 ;
-(PRPeer *)peer;
-(unsigned long long)vioSessionID;
-(double)timestampLocalSync;
-(double)timestampGlobalSync;
-(id)initWithMeasurement:(id)arg1 peer:(id)arg2 vioSessionID:(unsigned long long)arg3 ;
-(void)setTimestampLocalSync:(double)arg1 ;
-(void)setTimestampGlobalSync:(double)arg1 ;
@end

