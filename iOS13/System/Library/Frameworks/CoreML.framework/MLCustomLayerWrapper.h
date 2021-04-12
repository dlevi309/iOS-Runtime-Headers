/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/EspressoBrick.h>

@protocol MLCustomLayer;
@class NSString, NSObject;

@interface MLCustomLayerWrapper : NSObject <EspressoBrick> {

	BOOL _ndMode;
	NSString* _className;
	NSObject*<MLCustomLayer> _customImpl;

}

@property (nonatomic,readonly) BOOL ndMode;                                    //@synthesize ndMode=_ndMode - In the implementation block
@property (nonatomic,readonly) NSString * className;                           //@synthesize className=_className - In the implementation block
@property (nonatomic,retain) NSObject*<MLCustomLayer> customImpl;              //@synthesize customImpl=_customImpl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)espressoTensorsToCoremlTensorsGPU:(id)arg1 ;
+(int)intFromFourBytes:(char*)arg1 ;
+(id)espressoTensorsToCoremlTensors:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)coremlShapesToEspressoShapes:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)factory;
+(id)espressoShapesToCoremlShapes:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)espressoShapeToCoremlShape:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)coremlShapeToEspressoShape:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)getStrides:(id)arg1 ;
+(id)espressoTensorToCoremlTensor:(id)arg1 ndMode:(BOOL)arg2 ;
-(id)initWithParameters:(id)arg1 ;
-(NSString *)className;
-(void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2 ;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(BOOL)ndMode;
-(NSObject*<MLCustomLayer>)customImpl;
-(void)setCustomImpl:(NSObject*<MLCustomLayer>)arg1 ;
@end

