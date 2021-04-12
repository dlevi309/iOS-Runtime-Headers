/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIGeometryChangeObserver.h>

@class UIView, NSLayoutConstraint, UILayoutGuide, NSString;

@interface _UITAMICAdaptorView : UIView <_UIGeometryChangeObserver> {

	UIView* _view;
	NSLayoutConstraint* _width;
	NSLayoutConstraint* _height;
	CGSize _layoutSize;
	BOOL _inLayout;
	float _sizingPriority;
	UILayoutGuide* _sizingLayoutGuide;

}

@property (nonatomic,readonly) UIView * view;                                //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) float sizingPriority;                           //@synthesize sizingPriority=_sizingPriority - In the implementation block
@property (nonatomic,retain) UILayoutGuide * sizingLayoutGuide;              //@synthesize sizingLayoutGuide=_sizingLayoutGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldWrapView:(id)arg1 ;
-(UIView *)view;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(id)initWithView:(id)arg1 ;
-(void)updateForAvailableSize;
-(void)_geometryChanges:(id)arg1 forAncestor:(id)arg2 ;
-(void)setSizingLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setSizingPriority:(float)arg1 ;
-(float)sizingPriority;
-(UILayoutGuide *)sizingLayoutGuide;
@end

