/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
*/


@class SRDevice;

@interface SRFetchRequest : NSObject {

	double _from;
	double _to;
	SRDevice* _device;

}

@property (assign) double from;                    //@synthesize from=_from - In the implementation block
@property (assign) double to;                      //@synthesize to=_to - In the implementation block
@property (retain) SRDevice * device;              //@synthesize device=_device - In the implementation block
-(id)init;
-(void)dealloc;
-(SRDevice *)device;
-(double)to;
-(double)from;
-(void)setFrom:(double)arg1 ;
-(void)setTo:(double)arg1 ;
-(void)setDevice:(SRDevice *)arg1 ;
@end

