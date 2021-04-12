/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKTableViewCell.h>

@class PKPaymentAuthorizationLayout, UILabel, NSMutableArray, UIView, UIImageView, NSString, NSAttributedString, UIImage;

@interface PKPaymentAuthorizationItemCell : PKTableViewCell {

	PKPaymentAuthorizationLayout* _layout;
	UILabel* _labelView;
	NSMutableArray* _valueViews;
	UIView* _separatorView;
	UIImageView* _arrowView;
	UIImageView* _alertView;
	UIImageView* _labelImageView;
	NSMutableArray* _constraints;
	BOOL _constraintsDirty;
	BOOL _showsDisclosure;
	BOOL _showsSeparator;
	BOOL _centered;
	NSString* _accessibilityLabel;

}

@property (nonatomic,copy) NSAttributedString * label; 
@property (nonatomic,copy) UIImage * labelImage; 
@property (nonatomic,copy) NSString * accessibilityLabel;                  //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (assign,nonatomic) BOOL showsDisclosure;                         //@synthesize showsDisclosure=_showsDisclosure - In the implementation block
@property (assign,nonatomic) BOOL showsSeparator;                          //@synthesize showsSeparator=_showsSeparator - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;              //@synthesize centered=_centered - In the implementation block
-(id)addValue:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)prepareForReuse;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(void)setCentered:(BOOL)arg1 ;
-(id)_createValueView;
-(UIImage *)labelImage;
-(id)colorForValueType:(unsigned long long)arg1 ;
-(id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2 ;
-(BOOL)showsDisclosure;
-(BOOL)showsSeparator;
-(void)setShowsDisclosure:(BOOL)arg1 ;
-(id)addValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setLabelImage:(UIImage *)arg1 ;
-(void)setLabel:(NSAttributedString *)arg1 ;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(NSAttributedString *)label;
-(void)dealloc;
-(BOOL)isCentered;
-(void)_createSubviews;
@end

