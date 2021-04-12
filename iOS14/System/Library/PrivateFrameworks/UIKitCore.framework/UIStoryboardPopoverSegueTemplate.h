/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIStoryboardSegueTemplate.h>

@class NSArray, UIView, UIBarButtonItem;

@interface UIStoryboardPopoverSegueTemplate : UIStoryboardSegueTemplate {

	unsigned long long _permittedArrowDirections;
	NSArray* _passthroughViews;
	UIView* _anchorView;
	UIBarButtonItem* _anchorBarButtonItem;

}

@property (assign,nonatomic) unsigned long long permittedArrowDirections;              //@synthesize permittedArrowDirections=_permittedArrowDirections - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews;                                 //@synthesize passthroughViews=_passthroughViews - In the implementation block
@property (nonatomic,retain) UIView * anchorView;                                      //@synthesize anchorView=_anchorView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * anchorBarButtonItem;                    //@synthesize anchorBarButtonItem=_anchorBarButtonItem - In the implementation block
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(NSArray *)passthroughViews;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBarButtonItem *)anchorBarButtonItem;
-(void)setAnchorView:(UIView *)arg1 ;
-(void)setAnchorBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(unsigned long long)permittedArrowDirections;
-(UIView *)anchorView;
-(void)setPermittedArrowDirections:(unsigned long long)arg1 ;
@end

