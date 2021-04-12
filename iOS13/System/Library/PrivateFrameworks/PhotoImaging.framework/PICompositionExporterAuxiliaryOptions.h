/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PICompositionExporterOptions.h>

@class NSURL, NUAdjustment;

@interface PICompositionExporterAuxiliaryOptions : PICompositionExporterOptions {

	BOOL _renderCompanionResources;
	NSURL* _primaryURL;
	NSURL* _videoComplementURL;
	NSURL* _videoPosterFrameURL;
	NUAdjustment* _reframeCropAdjustment;
	NUAdjustment* _reframeVideoAdjustment;

}

@property (retain) NSURL * primaryURL;                                 //@synthesize primaryURL=_primaryURL - In the implementation block
@property (retain) NSURL * videoComplementURL;                         //@synthesize videoComplementURL=_videoComplementURL - In the implementation block
@property (retain) NSURL * videoPosterFrameURL;                        //@synthesize videoPosterFrameURL=_videoPosterFrameURL - In the implementation block
@property (assign) BOOL renderCompanionResources;                      //@synthesize renderCompanionResources=_renderCompanionResources - In the implementation block
@property (retain) NUAdjustment * reframeCropAdjustment;               //@synthesize reframeCropAdjustment=_reframeCropAdjustment - In the implementation block
@property (retain) NUAdjustment * reframeVideoAdjustment;              //@synthesize reframeVideoAdjustment=_reframeVideoAdjustment - In the implementation block
-(NSURL *)videoComplementURL;
-(void)setVideoComplementURL:(NSURL *)arg1 ;
-(NSURL *)primaryURL;
-(BOOL)renderCompanionResources;
-(void)setReframeVideoAdjustment:(NUAdjustment *)arg1 ;
-(void)setReframeCropAdjustment:(NUAdjustment *)arg1 ;
-(void)setRenderCompanionResources:(BOOL)arg1 ;
-(void)setVideoPosterFrameURL:(NSURL *)arg1 ;
-(void)setPrimaryURL:(NSURL *)arg1 ;
-(NSURL *)videoPosterFrameURL;
-(NUAdjustment *)reframeCropAdjustment;
-(NUAdjustment *)reframeVideoAdjustment;
@end

