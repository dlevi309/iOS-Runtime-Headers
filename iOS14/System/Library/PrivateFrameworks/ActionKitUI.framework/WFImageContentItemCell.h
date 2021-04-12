/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UITableViewCell.h>

@protocol WFImageContentItemCellDelegate;
@class NSMapTable, NSMutableArray, NSArray;

@interface WFImageContentItemCell : UITableViewCell {

	NSMapTable* _activityIndicators;
	NSMutableArray* _imageViews;
	NSMutableArray* _selectedImageViews;
	NSArray* _items;
	id<WFImageContentItemCellDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * items;                                                   //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) id<WFImageContentItemCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setItems:(NSArray *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id<WFImageContentItemCellDelegate>)delegate;
-(NSArray *)items;
-(void)setDelegate:(id<WFImageContentItemCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)imageViewTapped:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
@end

