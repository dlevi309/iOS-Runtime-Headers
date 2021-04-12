/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)prepareForReuse;
-(void)setLabel:(NSAttributedString *)arg1 ;
-(NSAttributedString *)label;
-(id)addValue:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)updateConstraints;
-(void)setShowsSeparator:(BOOL)arg1 ;
-(BOOL)isCentered;
-(void)_createSubviews;
-(void)setCentered:(BOOL)arg1 ;
-(id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setShowsDisclosure:(BOOL)arg1 ;
-(id)addValue:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setLabelImage:(UIImage *)arg1 ;
-(id)_createValueView;
-(id)colorForValueType:(unsigned long long)arg1 ;
-(id)_applyStylingToValueString:(id)arg1 defaultColor:(id)arg2 ;
-(UIImage *)labelImage;
-(BOOL)showsDisclosure;
-(BOOL)showsSeparator;
@end

