/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UICollectionReusableView.h>

@class UIColor, UIView;

@interface PUImportSectionBackgroundView : UICollectionReusableView {

	BOOL _needsBottomStrokeViewUpdate;
	double _strokeWidth;
	UIColor* _bottomStrokeColor;
	UIView* _bottomStrokeView;

}

@property (nonatomic,retain) UIView * bottomStrokeView;                     //@synthesize bottomStrokeView=_bottomStrokeView - In the implementation block
@property (assign,nonatomic) BOOL needsBottomStrokeViewUpdate;              //@synthesize needsBottomStrokeViewUpdate=_needsBottomStrokeViewUpdate - In the implementation block
@property (assign,nonatomic) double strokeWidth;                            //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * bottomStrokeColor;                   //@synthesize bottomStrokeColor=_bottomStrokeColor - In the implementation block
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(double)strokeWidth;
-(BOOL)needsStroke;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setNeedsBottomStrokeViewUpdate;
-(void)updateBottomStrokeViewIfNeeded;
-(void)setBottomStrokeColor:(UIColor *)arg1 ;
-(UIColor *)bottomStrokeColor;
-(UIView *)bottomStrokeView;
-(void)setBottomStrokeView:(UIView *)arg1 ;
-(BOOL)needsBottomStrokeViewUpdate;
-(void)setNeedsBottomStrokeViewUpdate:(BOOL)arg1 ;
@end

