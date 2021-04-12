/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol MTLCommandQueue;
@interface BWStillImageNodeConfiguration : NSObject {

	id<MTLCommandQueue> _metalCommandQueue;
	int _depthDataType;

}

@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue;              //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
@property (assign,nonatomic) int depthDataType;                                  //@synthesize depthDataType=_depthDataType - In the implementation block
-(void)dealloc;
-(int)depthDataType;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)setDepthDataType:(int)arg1 ;
@end

