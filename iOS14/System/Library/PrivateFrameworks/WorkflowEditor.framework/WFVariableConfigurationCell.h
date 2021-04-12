/*
* Generated on Thursday, January 14, 2021 at 2:28:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
*/

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@protocol WFVariableConfigurationCellSizingDelegate;
@class NSString, UIImageView, CAShapeLayer, UIView;

@interface WFVariableConfigurationCell : UITableViewCell {

	BOOL _showsSeparator;
	BOOL _roundsCorners;
	NSString* _titleText;
	NSString* _valueText;
	unsigned long long _roundedCorners;
	unsigned long long _accessory;
	id<WFVariableConfigurationCellSizingDelegate> _sizingDelegate;
	UIImageView* _disclosureImageView;
	CAShapeLayer* _maskLayer;
	UIView* _separatorView;

}

@property (nonatomic,readonly) UIImageView * disclosureImageView;                                              //@synthesize disclosureImageView=_disclosureImageView - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * maskLayer;                                                       //@synthesize maskLayer=_maskLayer - In the implementation block
@property (nonatomic,readonly) UIView * separatorView;                                                         //@synthesize separatorView=_separatorView - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                               //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * valueText;                                                               //@synthesize valueText=_valueText - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                                                              //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,nonatomic) BOOL roundsCorners;                                                               //@synthesize roundsCorners=_roundsCorners - In the implementation block
@property (assign,nonatomic) unsigned long long roundedCorners;                                                //@synthesize roundedCorners=_roundedCorners - In the implementation block
@property (assign,nonatomic) unsigned long long accessory;                                                     //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) id<WFVariableConfigurationCellSizingDelegate> sizingDelegate;              //@synthesize sizingDelegate=_sizingDelegate - In the implementation block
+(long long)cellStyle;
-(UIView *)separatorView;
-(id<WFVariableConfigurationCellSizingDelegate>)sizingDelegate;
-(BOOL)roundsCorners;
-(void)setRoundsCorners:(BOOL)arg1 ;
-(unsigned long long)accessory;
-(void)updateMask;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setValueText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)arg1 ;
-(void)setSizingDelegate:(id<WFVariableConfigurationCellSizingDelegate>)arg1 ;
-(CAShapeLayer *)maskLayer;
-(void)setRoundedCorners:(unsigned long long)arg1 ;
-(unsigned long long)roundedCorners;
-(void)setAccessory:(unsigned long long)arg1 ;
-(BOOL)showsSeparator;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)valueText;
-(UIImageView *)disclosureImageView;
@end

