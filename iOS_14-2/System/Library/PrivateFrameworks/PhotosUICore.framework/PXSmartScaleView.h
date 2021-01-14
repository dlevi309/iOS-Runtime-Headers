/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@interface PXSmartScaleView : UIView {

	CGSize _displaySize;

}

@property (assign) CGSize displaySize;                 //@synthesize displaySize=_displaySize - In the implementation block
@property (readonly) double displayScale; 
-(double)displayScale;
-(void)viewScaleDidChange;
-(void)setFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)displaySize;
-(void)setDisplaySize:(CGSize)arg1 ;
@end

