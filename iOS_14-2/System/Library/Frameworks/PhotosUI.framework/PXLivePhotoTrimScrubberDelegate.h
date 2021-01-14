/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol PXLivePhotoTrimScrubberDelegate <NSObject>
@optional
-(void)trimScrubberAssetDurationDidChange:(id)arg1;
-(void)trimScrubber:(id)arg1 didTapElement:(long long)arg2;
-(BOOL)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
-(void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
-(void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(BOOL)arg3;
-(void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
-(void)trimScrubber:(id)arg1 didChangeLoupeRect:(CGRect)arg2;
-(void)trimScrubber:(id)arg1 didZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
-(void)trimScrubberDidUnzoom:(id)arg1;
-(void)trimScrubberDidLayoutSubviews:(id)arg1;
-(void)trimScrubber:(id)arg1 debugStartRect:(CGRect)arg2;
-(void)trimScrubber:(id)arg1 debugEndRect:(CGRect)arg2;
-(void)trimScrubber:(id)arg1 debugStartOffset:(CGRect)arg2;
-(void)trimScrubber:(id)arg1 debugEndOffset:(CGRect)arg2;

@end

