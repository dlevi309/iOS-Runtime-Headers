/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@protocol MTLDevice;
@class NSDictionary;

@interface VNMetalContext : NSObject {

	BOOL _useGPU;
	id<MTLDevice> _metalDevice;
	NSDictionary* _wisdomParams;

}

@property (readonly) id<MTLDevice> metalDevice;                //@synthesize metalDevice=_metalDevice - In the implementation block
@property (readonly) NSDictionary * wisdomParams;              //@synthesize wisdomParams=_wisdomParams - In the implementation block
@property (readonly) BOOL useGPU;                              //@synthesize useGPU=_useGPU - In the implementation block
-(NSDictionary *)wisdomParams;
-(id)initWithMetalDevice:(id)arg1 ;
-(id<MTLDevice>)metalDevice;
-(BOOL)useGPU;
@end

