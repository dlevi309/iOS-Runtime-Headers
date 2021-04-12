/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol UILayoutContainerViewDelegate;
@class UIView;

@interface UILayoutContainerView : UIView <NSCoding> {

	UIView* _shadowView;
	struct {
		unsigned delegateRespondsToSemanticContentAttributeChanged : 1;
		unsigned delegateRespondsToViewWillLayoutSubviews : 1;
		unsigned delegateRespondsToWillMoveToWindow : 1;
		unsigned delegateRespondsToDidMoveToWindow : 1;
	}  _layoutContainerViewFlags;
	BOOL _usesInnerShadow;
	BOOL _usesRoundedCorners;
	id<UILayoutContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UILayoutContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL usesInnerShadow;                                           //@synthesize usesInnerShadow=_usesInnerShadow - In the implementation block
@property (assign,nonatomic) BOOL usesRoundedCorners;                                        //@synthesize usesRoundedCorners=_usesRoundedCorners - In the implementation block
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(id<UILayoutContainerViewDelegate>)delegate;
-(void)setUsesInnerShadow:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_installShadowViews;
-(void)setUsesRoundedCorners:(BOOL)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)_tearDownShadowViews;
-(void)setDelegate:(id<UILayoutContainerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateShadowViews;
-(BOOL)usesRoundedCorners;
-(id)initWithCoder:(id)arg1 ;
-(void)addSubview:(id)arg1 ;
-(void)_setFlagsFromDelegate:(id)arg1 ;
-(BOOL)usesInnerShadow;
-(void)dealloc;
@end

