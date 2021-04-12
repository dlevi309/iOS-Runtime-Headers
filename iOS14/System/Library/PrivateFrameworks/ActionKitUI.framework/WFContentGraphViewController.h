/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIViewController.h>

@class WFContentItem, CKForceLayoutAnimator, WFContentCoercionNodeView;

@interface WFContentGraphViewController : UIViewController {

	BOOL _coercing;
	WFContentItem* _contentItem;
	CKForceLayoutAnimator* _animator;
	WFContentCoercionNodeView* _rootNodeView;

}

@property (nonatomic,retain) CKForceLayoutAnimator * animator;                      //@synthesize animator=_animator - In the implementation block
@property (nonatomic,retain) WFContentCoercionNodeView * rootNodeView;              //@synthesize rootNodeView=_rootNodeView - In the implementation block
@property (assign,nonatomic) BOOL coercing;                                         //@synthesize coercing=_coercing - In the implementation block
@property (nonatomic,readonly) WFContentItem * contentItem;                         //@synthesize contentItem=_contentItem - In the implementation block
-(CKForceLayoutAnimator *)animator;
-(void)setAnimator:(CKForceLayoutAnimator *)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)initWithContentItem:(id)arg1 ;
-(void)done;
-(WFContentItem *)contentItem;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)useSmallBubbles;
-(void)tapNode:(id)arg1 ;
-(void)panNode:(id)arg1 ;
-(WFContentCoercionNodeView *)rootNodeView;
-(void)setRootNodeView:(WFContentCoercionNodeView *)arg1 ;
-(BOOL)coercing;
-(void)setCoercing:(BOOL)arg1 ;
@end

