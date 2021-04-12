/*
* Generated on Thursday, January 14, 2021 at 2:26:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
*/


@protocol MTLDevice;
@interface MPSGraphDevice : NSObject {

	id<MTLDevice> _mtlDevice;
	unsigned _type;
	unsigned _deviceType;
	id<MTLDevice> _metalDevice;

}

@property (nonatomic,readonly) unsigned type;                          //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) id<MTLDevice> metalDevice;              //@synthesize metalDevice=_metalDevice - In the implementation block
+(void)load;
+(id)deviceWithMTLDevice:(id)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(id<MTLDevice>)metalDevice;
-(unsigned)type;
@end

