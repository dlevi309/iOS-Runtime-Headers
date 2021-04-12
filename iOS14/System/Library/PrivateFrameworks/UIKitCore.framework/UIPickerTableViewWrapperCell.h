/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPickerTableViewCell.h>

@class UIView;

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {

	UIView* _wrappedView;
	UIView* _wrappedViewContainer;
	CGSize _wrappedViewSize;

}

@property (nonatomic,retain) UIView * wrappedView; 
-(void)setWrappedView:(UIView *)arg1 ;
-(id)_anyDateLabel;
-(void)prepareForReuse;
-(void)_updateWrappedViewFrame;
-(void)_updateWrappedView;
-(void)_setIsCenterCell:(BOOL)arg1 shouldModifyAlphaOfView:(BOOL)arg2 ;
-(UIView *)wrappedView;
-(void)resizeSubviewsWithOldSize:(CGSize)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

