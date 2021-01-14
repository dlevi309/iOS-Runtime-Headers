/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MTMaterialView;

@interface CCUIContentModuleContentContainerView : UIView {

	BOOL _expanded;
	MTMaterialView* _moduleMaterialView;
	BOOL _moduleProvidesOwnPlatter;
	double _compactContinuousCornerRadius;
	double _expandedContinuousCornerRadius;

}

@property (assign,nonatomic) BOOL moduleProvidesOwnPlatter;                      //@synthesize moduleProvidesOwnPlatter=_moduleProvidesOwnPlatter - In the implementation block
@property (assign,nonatomic) double compactContinuousCornerRadius;               //@synthesize compactContinuousCornerRadius=_compactContinuousCornerRadius - In the implementation block
@property (assign,nonatomic) double expandedContinuousCornerRadius;              //@synthesize expandedContinuousCornerRadius=_expandedContinuousCornerRadius - In the implementation block
-(void)_configureModuleMaterialViewIfNecessary;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)setExpandedContinuousCornerRadius:(double)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_transitionToExpandedMode:(BOOL)arg1 force:(BOOL)arg2 ;
-(double)compactContinuousCornerRadius;
-(void)layoutSubviews;
-(void)setCompactContinuousCornerRadius:(double)arg1 ;
-(void)setModuleProvidesOwnPlatter:(BOOL)arg1 ;
-(double)expandedContinuousCornerRadius;
-(void)addSubview:(id)arg1 ;
-(void)didEndTransitionToExpandedMode:(BOOL)arg1 ;
-(BOOL)_isContentClippingRequiredForSubview:(id)arg1 ;
-(void)_setContinuousCornerRadius:(double)arg1 ignoreSubviewClipping:(BOOL)arg2 ;
-(void)transitionToExpandedMode:(BOOL)arg1 ;
-(BOOL)moduleProvidesOwnPlatter;
@end

