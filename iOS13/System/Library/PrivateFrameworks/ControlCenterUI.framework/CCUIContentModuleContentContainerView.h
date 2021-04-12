/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MTMaterialView, NSString;

@interface CCUIContentModuleContentContainerView : UIView {

	BOOL _expanded;
	BOOL _moduleProvidesOwnPlatter;
	BOOL _clipsContentInCompactMode;
	MTMaterialView* _moduleMaterialView;
	NSString* _materialViewGroupName;
	double _compactContinuousCornerRadius;
	double _expandedContinuousCornerRadius;

}

@property (assign,nonatomic) BOOL moduleProvidesOwnPlatter;                      //@synthesize moduleProvidesOwnPlatter=_moduleProvidesOwnPlatter - In the implementation block
@property (nonatomic,readonly) MTMaterialView * moduleMaterialView;              //@synthesize moduleMaterialView=_moduleMaterialView - In the implementation block
@property (nonatomic,copy) NSString * materialViewGroupName;                     //@synthesize materialViewGroupName=_materialViewGroupName - In the implementation block
@property (assign,nonatomic) BOOL clipsContentInCompactMode;                     //@synthesize clipsContentInCompactMode=_clipsContentInCompactMode - In the implementation block
@property (assign,nonatomic) double compactContinuousCornerRadius;               //@synthesize compactContinuousCornerRadius=_compactContinuousCornerRadius - In the implementation block
@property (assign,nonatomic) double expandedContinuousCornerRadius;              //@synthesize expandedContinuousCornerRadius=_expandedContinuousCornerRadius - In the implementation block
-(id)init;
-(void)addSubview:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(void)_transitionToExpandedMode:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)_configureModuleMaterialViewIfNecessary;
-(BOOL)_isContentClippingRequiredForSubview:(id)arg1 ;
-(void)transitionToExpandedMode:(BOOL)arg1 ;
-(void)setModuleProvidesOwnPlatter:(BOOL)arg1 ;
-(MTMaterialView *)moduleMaterialView;
-(void)setMaterialViewGroupName:(NSString *)arg1 ;
-(BOOL)moduleProvidesOwnPlatter;
-(NSString *)materialViewGroupName;
-(BOOL)clipsContentInCompactMode;
-(void)setClipsContentInCompactMode:(BOOL)arg1 ;
-(double)compactContinuousCornerRadius;
-(void)setCompactContinuousCornerRadius:(double)arg1 ;
-(double)expandedContinuousCornerRadius;
-(void)setExpandedContinuousCornerRadius:(double)arg1 ;
@end

