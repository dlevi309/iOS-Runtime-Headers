/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UICollectionViewListCellReorderControlDelegate, UITableConstants;
@class UIImageView, UILongPressGestureRecognizer, UIColor, NSString;

@interface _UICollectionViewListCellReorderControl : UIControl <UIGestureRecognizerDelegate> {

	UIImageView* _imageView;
	UILongPressGestureRecognizer* _reorderRecognizer;
	BOOL _tracking;
	BOOL _needsImageViewUpdate;
	id<_UICollectionViewListCellReorderControlDelegate> _delegate;
	id<UITableConstants> _constants;
	UIColor* _accessoryTintColor;

}

@property (assign,nonatomic,__weak) id<_UICollectionViewListCellReorderControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<UITableConstants> constants;                                                   //@synthesize constants=_constants - In the implementation block
@property (nonatomic,retain) UIColor * accessoryTintColor;                                                     //@synthesize accessoryTintColor=_accessoryTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pan:(id)arg1 ;
-(void)_updateImageViewIfNeeded;
-(void)setConstants:(id<UITableConstants>)arg1 ;
-(id<_UICollectionViewListCellReorderControlDelegate>)delegate;
-(id<UITableConstants>)constants;
-(UIColor *)accessoryTintColor;
-(void)endReordering:(BOOL)arg1 ;
-(void)_setNeedsImageViewUpdate;
-(void)beginReordering;
-(void)gestureMovedToPoint:(CGPoint)arg1 ;
-(void)setDelegate:(id<_UICollectionViewListCellReorderControlDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithDelegate:(id)arg1 constants:(id)arg2 ;
-(void)setAccessoryTintColor:(UIColor *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
@end

