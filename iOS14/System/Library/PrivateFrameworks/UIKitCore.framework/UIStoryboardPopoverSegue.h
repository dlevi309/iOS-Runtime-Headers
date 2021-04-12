/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_setPassthroughViews:(id)arg1 ;
-(NSArray *)_passthroughViews;
-(void)perform;
-(UIPopoverController *)popoverController;
-(UIBarButtonItem *)_anchorBarButtonItem;
-(void)_setAnchorView:(id)arg1 ;
-(void)_setPermittedArrowDirections:(unsigned long long)arg1 ;
-(void)_setAnchorBarButtonItem:(id)arg1 ;
-(void)_setAnchorRect:(CGRect)arg1 ;
-(UIView *)_anchorView;
-(CGRect)_anchorRect;
-(unsigned long long)_permittedArrowDirections;
@end

