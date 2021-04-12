/*
* Generated on Thursday, January 14, 2021 at 2:26:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSMutableArray, NSData;

@interface MLCTensorOptimizerDeviceData : NSObject <NSCopying> {

	NSArray* _momentumVectors;
	NSArray* _velocityVectors;
	NSArray* _centerWeightVectors;
	id _gpuOps;
	NSMutableArray* _momentumData;
	NSMutableArray* _momentumDataBytes;
	NSData* _sourceBNNSDesc;
	NSData* _gradientBNNSDesc;

}

@property (nonatomic,retain) NSArray * momentumVectors;                       //@synthesize momentumVectors=_momentumVectors - In the implementation block
@property (nonatomic,retain) NSArray * velocityVectors;                       //@synthesize velocityVectors=_velocityVectors - In the implementation block
@property (nonatomic,retain) NSArray * centerWeightVectors;                   //@synthesize centerWeightVectors=_centerWeightVectors - In the implementation block
@property (nonatomic,retain) id gpuOps;                                       //@synthesize gpuOps=_gpuOps - In the implementation block
@property (nonatomic,retain) NSMutableArray * momentumData;                   //@synthesize momentumData=_momentumData - In the implementation block
@property (nonatomic,retain) NSMutableArray * momentumDataBytes;              //@synthesize momentumDataBytes=_momentumDataBytes - In the implementation block
@property (nonatomic,retain) NSData * sourceBNNSDesc;                         //@synthesize sourceBNNSDesc=_sourceBNNSDesc - In the implementation block
@property (nonatomic,retain) NSData * gradientBNNSDesc;                       //@synthesize gradientBNNSDesc=_gradientBNNSDesc - In the implementation block
+(id)optimizerDeviceData;
-(id)init;
-(id)gpuOps;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)momentumVectors;
-(NSArray *)velocityVectors;
-(NSArray *)centerWeightVectors;
-(void)setMomentumVectors:(NSArray *)arg1 ;
-(void)setVelocityVectors:(NSArray *)arg1 ;
-(void)setCenterWeightVectors:(NSArray *)arg1 ;
-(void)setGpuOps:(id)arg1 ;
-(NSMutableArray *)momentumData;
-(void)setMomentumData:(NSMutableArray *)arg1 ;
-(NSMutableArray *)momentumDataBytes;
-(void)setMomentumDataBytes:(NSMutableArray *)arg1 ;
-(NSData *)sourceBNNSDesc;
-(void)setSourceBNNSDesc:(NSData *)arg1 ;
-(NSData *)gradientBNNSDesc;
-(void)setGradientBNNSDesc:(NSData *)arg1 ;
@end

