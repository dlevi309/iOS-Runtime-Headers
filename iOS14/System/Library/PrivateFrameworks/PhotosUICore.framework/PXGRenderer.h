/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGRenderer <NSObject>
@property (assign,nonatomic,__weak) id<PXGRendererDelegate> delegate; 
@property (assign,nonatomic) CGRect visibleRect; 
@property (assign,nonatomic) SCD_Struct_PX22 interactionState; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) id<PXGTextureConverter> textureConverter; 
@property (nonatomic,copy) id test_renderSnapshotHandler; 
@optional
-(void)setTest_renderSnapshotHandler:(/*^block*/id)arg1;
-(id)test_renderSnapshotHandler;

@required
-(void)setInteractionState:(SCD_Struct_PX22)arg1;
-(void)setVisibleRect:(CGRect)arg1;
-(SCD_Struct_PX22)interactionState;
-(void)updateWithChangeDetails:(id)arg1;
-(CGRect)visibleRect;
-(id<PXGTextureConverter>)textureConverter;
-(id<PXGRendererDelegate>)delegate;
-(void)renderSpritesWithTextures:(id)arg1 dataStore:(id)arg2 presentationDataStore:(id)arg3 presentationMetadataStore:(id)arg4 layout:(id)arg5;
-(void)setDelegate:(id)arg1;
-(int)presentationType;
-(void)setNeedsRender;
-(void)releaseResources;

@end

