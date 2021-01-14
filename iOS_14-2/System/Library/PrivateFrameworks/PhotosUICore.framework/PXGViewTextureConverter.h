/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGTextureConverter.h>

@protocol OS_dispatch_queue;
@class PXGImageTexture, NSObject, NSString;

@interface PXGViewTextureConverter : NSObject <PXGTextureConverter> {

	BOOL _lowMemoryMode;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;

}

@property (nonatomic,readonly) int presentationType; 
@property (assign,nonatomic) BOOL lowMemoryMode;                                        //@synthesize lowMemoryMode=_lowMemoryMode - In the implementation block
@property (nonatomic,readonly) PXGImageTexture * transparentTexture; 
@property (nonatomic,readonly) BOOL supportsTextureAtlas; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;                 //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> processingQueue;              //@synthesize processingQueue=_processingQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(BOOL)supportsTextureAtlas;
-(id)createTextureFromCVPixelBuffer:(CVBufferRef)arg1 transform:(CGAffineTransform)arg2 ;
-(void)setLowMemoryMode:(BOOL)arg1 ;
-(id)createAtlasForTextureAtlasManager:(id)arg1 ;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)presentationType;
-(id)createPayloadTextureFromPayload:(id)arg1 ;
-(PXGImageTexture *)transparentTexture;
-(NSObject*<OS_dispatch_queue>)processingQueue;
-(BOOL)lowMemoryMode;
-(void)setProcessingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)createTextureAtlasManagerForImageDataSpec:(SCD_Struct_PX25)arg1 ;
-(id)createTextureFromCGImage:(CGImageRef)arg1 orientation:(unsigned)arg2 ;
@end

