/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>
#import <libobjc.A.dylib/NUTimeBased.h>

@protocol NUScalePolicy;
@class NSString;

@interface NUClassifyPipelineImageCorrectionRequest : NURenderRequest <NUTimeBased> {

	id<NUScalePolicy> _scalePolicy;

}

@property (retain) id<NUScalePolicy> scalePolicy;                   //@synthesize scalePolicy=_scalePolicy - In the implementation block
@property (assign,nonatomic) SCD_Struct_NU6 time; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(NSString *)description;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)newRenderJob;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
@end

