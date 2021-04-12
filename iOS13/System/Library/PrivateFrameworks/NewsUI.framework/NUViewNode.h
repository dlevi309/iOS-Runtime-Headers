/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <NewsUI/NUNode.h>

@class UIView;

@interface NUViewNode : NUNode {

	UIView* _view;
	Class _viewClass;
	CGRect _frame;
	CGRect _bounds;

}

@property (nonatomic,readonly) Class viewClass;              //@synthesize viewClass=_viewClass - In the implementation block
@property (nonatomic,retain) UIView * view;                  //@synthesize view=_view - In the implementation block
-(id)description;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)frame;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithView:(id)arg1 ;
-(Class)viewClass;
-(void)removeFromSupernode;
-(void)resolveViewsInView:(id)arg1 ;
-(id)initWithViewClass:(Class)arg1 ;
@end

