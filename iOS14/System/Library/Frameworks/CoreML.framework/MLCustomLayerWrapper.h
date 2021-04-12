/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)factory;
+(id)espressoTensorsToCoremlTensorsGPU:(id)arg1 ;
+(id)getStrides:(id)arg1 ;
+(id)espressoTensorsToCoremlTensors:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)coremlShapesToEspressoShapes:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)espressoShapesToCoremlShapes:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)espressoShapeToCoremlShape:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)coremlShapeToEspressoShape:(id)arg1 ndMode:(BOOL)arg2 ;
+(id)espressoTensorToCoremlTensor:(id)arg1 ndMode:(BOOL)arg2 ;
-(BOOL)ndMode;
-(NSString *)className;
-(void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2 ;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2 ;
-(void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3 ;
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2 ;
-(BOOL)hasGPUSupport;
-(NSObject*<MLCustomLayer>)customImpl;
-(void)setCustomImpl:(NSObject*<MLCustomLayer>)arg1 ;
-(id)initWithParameters:(id)arg1 ;
@end

