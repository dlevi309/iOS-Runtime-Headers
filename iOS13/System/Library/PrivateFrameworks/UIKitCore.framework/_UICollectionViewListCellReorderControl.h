/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol _UICollectionViewListCellReorderControlDelegate;
@class UIImageView, UILongPressGestureRecognizer, NSString;

@interface _UICollectionViewListCellReorderControl : UIView <UIGestureRecognizerDelegate> {

	UIImageView* _imageView;
	UILongPressGestureRecognizer* _reorderRecognizer;
	BOOL _tracking;
	id<_UICollectionViewListCellReorderControlDelegate> _delegate;
	/*^block*/id _grabberImageProvider;

}

@property (nonatomic,copy) id grabberImageProvider;                                                            //@synthesize grabberImageProvider=_grabberImageProvider - In the implementation block
@property (assign,nonatomic,__weak) id<_UICollectionViewListCellReorderControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<_UICollectionViewListCellReorderControlDelegate>)delegate;
-(void)setDelegate:(id<_UICollectionViewListCellReorderControlDelegate>)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)initWithFrame:(CGRect)arg1 grabberImageProvider:(/*^block*/id)arg2 ;
-(void)setGrabberImageProvider:(id)arg1 ;
-(void)pan:(id)arg1 ;
-(id)grabberImageProvider;
-(void)beginReordering;
-(void)moveToPoint:(CGPoint)arg1 ;
-(void)endReordering:(BOOL)arg1 ;
@end

