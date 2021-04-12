/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)configureWithContent:(id)arg1 ;
-(id)transitionContextInView:(id)arg1 ;
@end

