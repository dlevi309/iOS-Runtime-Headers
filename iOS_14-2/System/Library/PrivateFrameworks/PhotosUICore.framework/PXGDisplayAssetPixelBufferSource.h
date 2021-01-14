/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGDisplayAssetPixelBufferSource <NSObject>
@property (nonatomic,readonly) CVBufferRef currentPixelBuffer; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,copy) id pixelBufferDidChangeHandler; 
@required
-(CGAffineTransform)preferredTransform;
-(CVBufferRef)currentPixelBuffer;
-(void)setPixelBufferDidChangeHandler:(/*^block*/id)arg1;
-(id)pixelBufferDidChangeHandler;

@end

