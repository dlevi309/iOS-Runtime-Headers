/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, UILabel, NSArray;

@interface HUTemperatureUnitControlView : UIView <HUControlView> {

	BOOL _canBeHighlighted;
	BOOL _viewDisabled;
	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _detailLabel;
	long long _currentUnit;
	NSArray* _labelConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                                  //@synthesize detailLabel=_detailLabel - In the implementation block
@property (assign,nonatomic) long long currentUnit;                                  //@synthesize currentUnit=_currentUnit - In the implementation block
@property (assign,nonatomic) BOOL viewDisabled;                                      //@synthesize viewDisabled=_viewDisabled - In the implementation block
@property (nonatomic,copy) NSArray * labelConstraints;                               //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted;                                  //@synthesize canBeHighlighted=_canBeHighlighted - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)valueClass;
-(UILabel *)titleLabel;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUControlViewDelegate>)delegate;
-(BOOL)isDisabled;
-(void)setValue:(id)arg1 ;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(void)updateConstraints;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(UILabel *)detailLabel;
-(id)value;
-(long long)currentUnit;
-(void)setCurrentUnit:(long long)arg1 ;
-(id)_unitStringForCurrentUnit;
-(BOOL)viewDisabled;
-(BOOL)canBeHighlighted;
-(void)setCanBeHighlighted:(BOOL)arg1 ;
-(void)setViewDisabled:(BOOL)arg1 ;
@end

