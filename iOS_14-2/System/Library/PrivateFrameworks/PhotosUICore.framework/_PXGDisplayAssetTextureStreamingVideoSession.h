/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGDisplayAssetPixelBufferSource, PXDisplayAsset;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMutableIndexSet, NSDate, NSIndexSet;

@interface _PXGDisplayAssetTextureStreamingVideoSession : NSObject {

	NSMutableIndexSet* _textureRequestIDs;
	id<PXGDisplayAssetPixelBufferSource> _pixelBufferSource;
	id<PXDisplayAsset> _displayAsset;
	NSDate* _firstPixelBufferDisplayDate;
	CVPixelBufferPoolRef _pixelBufferPool;

}

@property (nonatomic,readonly) id<PXGDisplayAssetPixelBufferSource> pixelBufferSource;              //@synthesize pixelBufferSource=_pixelBufferSource - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> displayAsset;                                     //@synthesize displayAsset=_displayAsset - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * textureRequestIDs; 
@property (nonatomic,copy) NSDate * firstPixelBufferDisplayDate;                                    //@synthesize firstPixelBufferDisplayDate=_firstPixelBufferDisplayDate - In the implementation block
@property (nonatomic,retain) CVPixelBufferPoolRef pixelBufferPool;                                  //@synthesize pixelBufferPool=_pixelBufferPool - In the implementation block
-(CVPixelBufferPoolRef)pixelBufferPool;
-(NSIndexSet *)textureRequestIDs;
-(void)removeTextureRequestIDs:(id)arg1 ;
-(void)setPixelBufferPool:(CVPixelBufferPoolRef)arg1 ;
-(id<PXGDisplayAssetPixelBufferSource>)pixelBufferSource;
-(void)setFirstPixelBufferDisplayDate:(NSDate *)arg1 ;
-(NSDate *)firstPixelBufferDisplayDate;
-(id<PXDisplayAsset>)displayAsset;
-(void)addTextureRequestID:(int)arg1 ;
-(id)initWithPixelBufferSource:(id)arg1 displayAsset:(id)arg2 ;
-(void)removeTextureRequestID:(int)arg1 ;
@end

