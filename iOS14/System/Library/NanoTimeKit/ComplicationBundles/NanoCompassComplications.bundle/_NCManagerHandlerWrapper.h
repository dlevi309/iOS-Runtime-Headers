/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/NanoTimeKit/ComplicationBundles/NanoCompassComplications.bundle/NanoCompassComplications
*/


@interface _NCManagerHandlerWrapper : NSObject {

	double _updateInterval;
	/*^block*/id _handler;
	/*^block*/id _calibratedHandler;

}

@property (assign,nonatomic) double updateInterval;              //@synthesize updateInterval=_updateInterval - In the implementation block
@property (nonatomic,copy) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (nonatomic,copy) id calibratedHandler;                 //@synthesize calibratedHandler=_calibratedHandler - In the implementation block
+(id)wrapperWithUpdateInterval:(double)arg1 handler:(/*^block*/id)arg2 calibratedHandler:(/*^block*/id)arg3 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(void)setHandler:(id)arg1 ;
-(id)handler;
-(id)calibratedHandler;
-(void)setCalibratedHandler:(id)arg1 ;
@end

