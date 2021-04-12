/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIStoryboardSegue.h>

@class UIPopoverController, NSArray, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverSegue : UIStoryboardSegue {

	UIPopoverController* _popoverController;
	NSArray* _passthroughViews;
	unsigned long long _permittedArrowDirections;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;
	CGRect _anchorRect;

}

@property (setter=_setPassthroughViews:,nonatomic,copy) NSArray * _passthroughViews;                                         //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (assign,setter=_setPermittedArrowDirections:,nonatomic) unsigned long long _permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (setter=_setAnchorBarButtonItem:,nonatomic,retain) UIBarButtonItem * _anchorBarButtonItem;                         //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
@property (setter=_setAnchorView:,nonatomic,retain) UIView * _anchorView;                                                    //@synthesize anchorView=_anchorView - In the implementation block
@property (assign,setter=_setAnchorRect:,nonatomic) CGRect _anchorRect;                                                      //@synthesize anchorRect=_anchorRect - In the implementation block
@property (nonatomic,readonly) UIPopoverController * popoverController;                                                      //@synthesize popoverController=_popoverController - In the implementation block
-(UIPopoverController *)popoverController;
-(NSArray *)_passthroughViews;
-(unsigned long long)_permittedArrowDirections;
-(void)_setPassthroughViews:(id)arg1 ;
-(UIView *)_anchorView;
-(UIBarButtonItem *)_anchorBarButtonItem;
-(CGRect)_anchorRect;
-(void)perform;
-(void)_setPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)_setAnchorView:(id)arg1 ;
-(void)_setAnchorBarButtonItem:(id)arg1 ;
-(void)_setAnchorRect:(CGRect)arg1 ;
@end

