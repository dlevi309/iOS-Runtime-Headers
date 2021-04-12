/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUControlPanelCell.h>
#import <libobjc.A.dylib/HUWheelControlViewDelegate.h>

@class HUWheelControlView, UILabel, UIView, NSArray, NSString;

@interface HUWheelControlPanelCell : HUControlPanelCell <HUWheelControlViewDelegate> {

	BOOL _wheelViewVisible;
	HUWheelControlView* _wheelView;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	UIView* _separatorView;
	NSArray* _staticConstraints;
	NSArray* _dynamicConstraints;

}

@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * detailLabel;                        //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                       //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                    //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * dynamicConstraints;                   //@synthesize dynamicConstraints=_dynamicConstraints - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * detailText; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (nonatomic,retain) HUWheelControlView * wheelView;                 //@synthesize wheelView=_wheelView - In the implementation block
@property (assign,nonatomic) BOOL wheelViewVisible;                          //@synthesize wheelViewVisible=_wheelViewVisible - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(void)prepareForReuse;
-(BOOL)isDisabled;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(void)updateConstraints;
-(UIView *)separatorView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
-(NSString *)titleText;
-(UILabel *)detailLabel;
-(HUWheelControlView *)wheelView;
-(void)wheelControlView:(id)arg1 didUpdateValue:(id)arg2 ;
-(id)allControlViews;
-(void)setDynamicConstraints:(NSArray *)arg1 ;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(NSArray *)dynamicConstraints;
-(void)setWheelViewVisible:(BOOL)arg1 ;
-(void)setWheelView:(HUWheelControlView *)arg1 ;
-(BOOL)wheelViewVisible;
@end

