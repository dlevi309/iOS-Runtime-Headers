/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXScrollViewControllerObserver.h>
#import <libobjc.A.dylib/PXGRenderer.h>

@protocol PXGRendererDelegate, PXGTextureConverter;
@class NSMutableDictionary, PXScrollViewController, NSString;

@interface PXGViewRenderer : NSObject <PXScrollViewControllerObserver, PXGRenderer> {

	NSMutableDictionary* _reusableViewsByClass;
	NSMutableDictionary* _viewBySpriteIndex;
	long long _spriteBufferCapacity;
	unsigned* _spriteIndexes;
	{?=}* _textureInfos;
	CGPoint _renderedVisibleOrigin;
	UIEdgeInsets _visibleRectInsets;
	/*^block*/id _test_renderSnapshotHandler;
	id<PXGRendererDelegate> _delegate;
	id<PXGTextureConverter> _textureConverter;
	PXScrollViewController* _scrollViewController;
	CGRect _visibleRect;
	SCD_Struct_PX23 _interactionState;

}

@property (nonatomic,retain) PXScrollViewController * scrollViewController;              //@synthesize scrollViewController=_scrollViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<PXGRendererDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect visibleRect;                                         //@synthesize visibleRect=_visibleRect - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX22 interactionState;                           //@synthesize interactionState=_interactionState - In the implementation block
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) id<PXGTextureConverter> textureConverter;                 //@synthesize textureConverter=_textureConverter - In the implementation block
@property (nonatomic,copy) id test_renderSnapshotHandler;                                //@synthesize test_renderSnapshotHandler=_test_renderSnapshotHandler - In the implementation block
-(id)viewForSpriteIndex:(unsigned)arg1 ;
-(void)setInteractionState:(SCD_Struct_PX22)arg1 ;
-(void)setVisibleRect:(CGRect)arg1 ;
-(void)setScrollViewController:(PXScrollViewController *)arg1 ;
-(double)_screenScale;
-(SCD_Struct_PX22)interactionState;
-(void)updateWithChangeDetails:(id)arg1 ;
-(void)scrollViewControllerDidScroll:(id)arg1 ;
-(CGRect)visibleRect;
-(id)init;
-(void)setTest_renderSnapshotHandler:(id)arg1 ;
-(id<PXGTextureConverter>)textureConverter;
-(PXScrollViewController *)scrollViewController;
-(void)_resizeBuffersForSpriteCount:(long long)arg1 ;
-(id<PXGRendererDelegate>)delegate;
-(void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5 ;
-(id)_dequeueViewWithClass:(Class)arg1 ;
-(void)setDelegate:(id<PXGRendererDelegate>)arg1 ;
-(void)_makeViewReusable:(id)arg1 ;
-(int)presentationType;
-(void)_shiftViewsToCompensateForDeferredVisibleOrigin;
-(void)setNeedsRender;
-(id)test_renderSnapshotHandler;
-(void)releaseResources;
-(void)dealloc;
@end

