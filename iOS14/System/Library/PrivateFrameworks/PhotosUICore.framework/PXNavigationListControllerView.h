/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface PXNavigationListControllerView : UIView {

	UIView* _contentView;
	double _contentViewHeight;

}

@property (nonatomic,retain) UIView * contentView;                  //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double contentViewHeight;              //@synthesize contentViewHeight=_contentViewHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentViewHeight:(double)arg1 ;
-(void)_updateContentViewFrame;
-(double)contentViewHeight;
-(void)setFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)addSubview:(id)arg1 ;
-(UIView *)contentView;
@end

