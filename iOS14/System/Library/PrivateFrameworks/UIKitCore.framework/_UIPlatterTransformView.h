/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPortalView, UIView;

@interface _UIPlatterTransformView : UIView {

	BOOL _hidesSourceView;
	BOOL _forwardsHitTestingToSourceView;
	BOOL _matchesAlpha;
	BOOL _appliesMinificationFilter;
	BOOL _allowsUserInteraction;
	BOOL _shouldTakeOwnershipOfSourceView;
	UITargetedPreview* _sourcePreview;
	_UIPortalView* _portalView;

}

@property (nonatomic,retain) _UIPortalView * portalView;                        //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,readonly) UIView * sourceView; 
@property (assign,nonatomic) BOOL shouldTakeOwnershipOfSourceView;              //@synthesize shouldTakeOwnershipOfSourceView=_shouldTakeOwnershipOfSourceView - In the implementation block
@property (assign,nonatomic) BOOL hidesSourceView;                              //@synthesize hidesSourceView=_hidesSourceView - In the implementation block
@property (assign,nonatomic) BOOL forwardsHitTestingToSourceView;               //@synthesize forwardsHitTestingToSourceView=_forwardsHitTestingToSourceView - In the implementation block
@property (assign,nonatomic) BOOL matchesAlpha;                                 //@synthesize matchesAlpha=_matchesAlpha - In the implementation block
@property (assign,nonatomic) BOOL appliesMinificationFilter;                    //@synthesize appliesMinificationFilter=_appliesMinificationFilter - In the implementation block
@property (assign,nonatomic) BOOL allowsUserInteraction;                        //@synthesize allowsUserInteraction=_allowsUserInteraction - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;                 //@synthesize sourcePreview=_sourcePreview - In the implementation block
-(BOOL)matchesAlpha;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMatchesAlpha:(BOOL)arg1 ;
-(BOOL)hidesSourceView;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(UIView *)sourceView;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UIPortalView *)portalView;
-(UITargetedPreview *)sourcePreview;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(void)setAllowsUserInteraction:(BOOL)arg1 ;
-(BOOL)allowsUserInteraction;
-(void)setAppliesMinificationFilter:(BOOL)arg1 ;
-(void)setForwardsHitTestingToSourceView:(BOOL)arg1 ;
-(BOOL)shouldTakeOwnershipOfSourceView;
-(void)setShouldTakeOwnershipOfSourceView:(BOOL)arg1 ;
-(BOOL)forwardsHitTestingToSourceView;
-(void)_updateMinificationFilter;
-(BOOL)appliesMinificationFilter;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
@end

