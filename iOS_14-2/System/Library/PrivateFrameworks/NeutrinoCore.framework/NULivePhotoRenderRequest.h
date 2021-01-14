/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NUScalePolicy;
@class NURenderContext, NUColorSpace;

@interface NULivePhotoRenderRequest : NURenderRequest {

	NURenderContext* _stillBufferRenderContext;
	id<NUScalePolicy> _scalePolicy;
	NUColorSpace* _colorSpace;

}

@property (retain) id<NUScalePolicy> scalePolicy;                    //@synthesize scalePolicy=_scalePolicy - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(NUColorSpace *)colorSpace;
-(id)initWithComposition:(id)arg1 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NUScalePolicy>)scalePolicy;
-(id)livePhotoRenderResultFromPhotoResponse:(id)arg1 videoResponse:(id)arg2 propertiesResponse:(id)arg3 error:(out id*)arg4 ;
@end

