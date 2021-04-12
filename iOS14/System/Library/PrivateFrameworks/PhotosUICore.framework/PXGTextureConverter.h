/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class PXGImageTexture;


@protocol PXGTextureConverter <NSObject>
@property (nonatomic,readonly) int presentationType; 
@property (assign,nonatomic) BOOL lowMemoryMode; 
@property (nonatomic,readonly) PXGImageTexture * transparentTexture; 
@property (nonatomic,readonly) BOOL supportsTextureAtlas; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue; 
@required
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(BOOL)supportsTextureAtlas;
-(id)createTextureFromCVPixelBuffer:(CVBufferRef)arg1 transform:(CGAffineTransform)arg2;
-(void)setLowMemoryMode:(BOOL)arg1;
-(id)createAtlasForTextureAtlasManager:(id)arg1;
-(void)setRequestQueue:(id)arg1;
-(int)presentationType;
-(id)createPayloadTextureFromPayload:(id)arg1;
-(PXGImageTexture *)transparentTexture;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(BOOL)lowMemoryMode;
-(void)setProcessingQueue:(id)arg1;
-(id)createTextureAtlasManagerForImageDataSpec:(SCD_Struct_PX25)arg1;
-(id)createTextureFromCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2;

@end

