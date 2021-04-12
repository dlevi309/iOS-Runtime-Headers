/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@class PXAssetVariationRenderProvider, NSProgress;

@interface _PUOneUpLivePhotoVariationSuggestionInfo : NSObject {

	BOOL _didBeginRendering;
	BOOL _didAddRenderProgress;
	long long _variationType;
	PXAssetVariationRenderProvider* _renderProvider;
	NSProgress* _progress;
	/*^block*/id _resultHandler;

}

@property (assign,nonatomic) long long variationType;                                      //@synthesize variationType=_variationType - In the implementation block
@property (nonatomic,retain) PXAssetVariationRenderProvider * renderProvider;              //@synthesize renderProvider=_renderProvider - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                        //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) id resultHandler;                                               //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL didBeginRendering;                                       //@synthesize didBeginRendering=_didBeginRendering - In the implementation block
@property (assign,nonatomic) BOOL didAddRenderProgress;                                    //@synthesize didAddRenderProgress=_didAddRenderProgress - In the implementation block
-(id)resultHandler;
-(NSProgress *)progress;
-(long long)variationType;
-(void)setRenderProvider:(PXAssetVariationRenderProvider *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(PXAssetVariationRenderProvider *)renderProvider;
-(void)setDidAddRenderProgress:(BOOL)arg1 ;
-(BOOL)didAddRenderProgress;
-(void)setVariationType:(long long)arg1 ;
-(void)setDidBeginRendering:(BOOL)arg1 ;
-(BOOL)didBeginRendering;
-(void)setResultHandler:(id)arg1 ;
@end

