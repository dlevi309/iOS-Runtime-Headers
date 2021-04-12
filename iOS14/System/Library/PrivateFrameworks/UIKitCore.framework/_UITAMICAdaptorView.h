/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSizingPriority:(float)arg1 ;
-(void)_geometryChanged:(const SCD_Struct_UI29*)arg1 forAncestor:(id)arg2 ;
-(void)setSizingLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)updateForAvailableSize;
-(void)layoutSubviews;
-(UIView *)view;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithView:(id)arg1 ;
-(float)sizingPriority;
-(UILayoutGuide *)sizingLayoutGuide;
@end

