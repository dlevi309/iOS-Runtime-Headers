/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class ISLivePhotoUIView;


@protocol PXMutableLivePhotoViewModulator <NSObject>
@property (nonatomic,retain) ISLivePhotoUIView * livePhotoView; 
@property (nonatomic,retain) CGImageRef gainMapImage; 
@property (assign,nonatomic) float gainMapValue; 
@property (assign,nonatomic) BOOL revealsGainMapImage; 
@required
-(void)setGainMapImage:(CGImageRef)arg1;
-(CGImageRef)gainMapImage;
-(float)gainMapValue;
-(ISLivePhotoUIView *)livePhotoView;
-(void)setGainMapValue:(float)arg1;
-(BOOL)revealsGainMapImage;
-(void)setGainMapImage:(CGImageRef)arg1 animated:(BOOL)arg2;
-(void)setLivePhotoView:(id)arg1;
-(void)setRevealsGainMapImage:(BOOL)arg1;

@end

