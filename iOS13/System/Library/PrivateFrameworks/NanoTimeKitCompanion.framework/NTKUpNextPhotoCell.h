/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUpNextBaseCell.h>

@interface NTKUpNextPhotoCell : NTKUpNextBaseCell {

	CGSize _scaledImageSize;
	CGRect _facesRect;
	double _aspectRatio;
	BOOL _wantsFullCellPhoto;

}
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)configureWithContent:(id)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(id)transitionContextInView:(id)arg1 ;
@end

