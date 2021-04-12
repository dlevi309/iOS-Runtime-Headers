/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@protocol MTLCommandQueue;
@class NSArray;

@interface BWStillImageProcessorConfiguration : NSObject {

	NSArray* _sensorConfigurations;
	BOOL _deferredProcessingEnabled;
	id<MTLCommandQueue> _metalCommandQueue;

}

@property (nonatomic,retain) NSArray * sensorConfigurations;                     //@synthesize sensorConfigurations=_sensorConfigurations - In the implementation block
@property (assign,nonatomic) BOOL deferredProcessingEnabled;                     //@synthesize deferredProcessingEnabled=_deferredProcessingEnabled - In the implementation block
@property (nonatomic,retain) id<MTLCommandQueue> metalCommandQueue;              //@synthesize metalCommandQueue=_metalCommandQueue - In the implementation block
-(void)dealloc;
-(void)setDeferredProcessingEnabled:(BOOL)arg1 ;
-(BOOL)deferredProcessingEnabled;
-(void)setSensorConfigurations:(NSArray *)arg1 ;
-(id<MTLCommandQueue>)metalCommandQueue;
-(void)setMetalCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(NSArray *)sensorConfigurations;
@end

