/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
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
-(double)to;
-(double)from;
-(id)init;
-(void)setTo:(double)arg1 ;
-(SRDevice *)device;
-(void)setFrom:(double)arg1 ;
-(void)setDevice:(SRDevice *)arg1 ;
-(void)dealloc;
@end

