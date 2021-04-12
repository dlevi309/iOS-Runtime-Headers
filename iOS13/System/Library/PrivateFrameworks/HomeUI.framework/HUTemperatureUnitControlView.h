/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted;                                  //@synthesize canBeHighlighted=_canBeHighlighted - In the implementation block
+(Class)valueClass;
-(id<HUControlViewDelegate>)delegate;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(NSString *)identifier;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isDisabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(long long)currentUnit;
-(void)setCurrentUnit:(long long)arg1 ;
-(id)_unitStringForCurrentUnit;
-(BOOL)viewDisabled;
-(BOOL)canBeHighlighted;
-(void)setCanBeHighlighted:(BOOL)arg1 ;
-(void)setViewDisabled:(BOOL)arg1 ;
@end

