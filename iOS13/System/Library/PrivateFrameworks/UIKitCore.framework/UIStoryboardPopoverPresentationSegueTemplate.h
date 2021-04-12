/*
* Generated on Monday, March 1, 2021 at 2:30:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSArray, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverPresentationSegueTemplate : UIStoryboardSegueTemplate {

	unsigned long long _permittedArrowDirections;
	NSArray* _passthroughViews;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;

}

@property (assign,nonatomic) unsigned long long permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                                 //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (nonatomic,retain) UIView * anchorView;                                      //@synthesize anchorView=_anchorView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * anchorBarButtonItem;                    //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(unsigned long long)permittedArrowDirections;
-(UIView *)anchorView;
-(UIBarButtonItem *)anchorBarButtonItem;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(void)setAnchorView:(UIView *)arg1 ;
-(void)setAnchorBarButtonItem:(UIBarButtonItem *)arg1 ;
@end

