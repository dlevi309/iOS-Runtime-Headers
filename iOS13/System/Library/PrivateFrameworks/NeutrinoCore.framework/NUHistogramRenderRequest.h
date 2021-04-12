/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@class NUHistogramParameters, NUColorSpace, NSString;

@interface NUHistogramRenderRequest : NURenderRequest <NUTimeBased> {

	NUHistogramParameters* _parameters;
	NUColorSpace* _colorSpace;

}

@property (nonatomic,copy) NUHistogramParameters * parameters; 
@property (nonatomic,retain) NUColorSpace * colorSpace;                     //@synthesize colorSpace=_colorSpace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_NU6 time; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUHistogramParameters *)parameters;
-(NUColorSpace *)colorSpace;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(void)setParameters:(NUHistogramParameters *)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
@end

