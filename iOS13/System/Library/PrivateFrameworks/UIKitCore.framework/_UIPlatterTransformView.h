/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UITargetedPreview, _UIPortalView;

@interface _UIPlatterTransformView : UIView {

	BOOL _hidesSourceView;
	BOOL _forwardsHitTestingToSourceView;
	BOOL _matchesAlpha;
	BOOL _appliesMinificationFilter;
	BOOL _allowsUserInteraction;
	BOOL _shouldTakeOwnershipOfSourceView;
	UIView* _sourceView;
	UITargetedPreview* _sourcePreview;
	_UIPortalView* _portalView;

}

@property (nonatomic,retain) _UIPortalView * portalView;                        //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,readonly) UIView * sourceView;                             //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) BOOL shouldTakeOwnershipOfSourceView;              //@synthesize shouldTakeOwnershipOfSourceView=_shouldTakeOwnershipOfSourceView - In the implementation block
@property (assign,nonatomic) BOOL hidesSourceView;                              //@synthesize hidesSourceView=_hidesSourceView - In the implementation block
@property (assign,nonatomic) BOOL forwardsHitTestingToSourceView;               //@synthesize forwardsHitTestingToSourceView=_forwardsHitTestingToSourceView - In the implementation block
@property (assign,nonatomic) BOOL matchesAlpha;                                 //@synthesize matchesAlpha=_matchesAlpha - In the implementation block
@property (assign,nonatomic) BOOL appliesMinificationFilter;                    //@synthesize appliesMinificationFilter=_appliesMinificationFilter - In the implementation block
@property (assign,nonatomic) BOOL allowsUserInteraction;                        //@synthesize allowsUserInteraction=_allowsUserInteraction - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;                 //@synthesize sourcePreview=_sourcePreview - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)sourceView;
-(void)didMoveToWindow;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(UITargetedPreview *)sourcePreview;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(_UIPortalView *)portalView;
-(BOOL)hidesSourceView;
-(void)setMatchesAlpha:(BOOL)arg1 ;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(BOOL)matchesAlpha;
-(void)setAllowsUserInteraction:(BOOL)arg1 ;
-(BOOL)allowsUserInteraction;
-(void)setAppliesMinificationFilter:(BOOL)arg1 ;
-(void)setForwardsHitTestingToSourceView:(BOOL)arg1 ;
-(BOOL)shouldTakeOwnershipOfSourceView;
-(void)setShouldTakeOwnershipOfSourceView:(BOOL)arg1 ;
-(BOOL)forwardsHitTestingToSourceView;
-(void)_updateMinificationFilter;
-(BOOL)appliesMinificationFilter;
@end

