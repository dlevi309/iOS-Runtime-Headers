/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/


@class NSString;

@interface MLLayerExecutionSchedule : NSObject {

	long long _layerError;
	NSString* _layerName;
	NSString* _deviceName;

}

@property (nonatomic,copy) NSString * layerName;                //@synthesize layerName=_layerName - In the implementation block
@property (nonatomic,copy) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long layerError;              //@synthesize layerError=_layerError - In the implementation block
-(NSString *)deviceName;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(id)initWithLayerError:(long long)arg1 ;
-(id)initWithScheduledDevice:(id)arg1 layerName:(id)arg2 layerError:(long long)arg3 ;
-(long long)layerError;
-(void)setLayerError:(long long)arg1 ;
@end

