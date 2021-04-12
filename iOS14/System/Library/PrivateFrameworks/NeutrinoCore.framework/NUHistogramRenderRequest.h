/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NUHistogramParameters, NUColorSpace, NSString;

@interface NUHistogramRenderRequest : NURenderRequest <NUTimeBased> {

	NUHistogramParameters* _parameters;
	NUColorSpace* _histogramCalculationColorSpace;

}

@property (nonatomic,copy) NUHistogramParameters * parameters; 
@property (nonatomic,retain) NUColorSpace * histogramCalculationColorSpace;              //@synthesize histogramCalculationColorSpace=_histogramCalculationColorSpace - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NUHistogramParameters *)parameters;
-(void)setParameters:(NUHistogramParameters *)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(NUColorSpace *)histogramCalculationColorSpace;
-(void)setHistogramCalculationColorSpace:(NUColorSpace *)arg1 ;
@end

