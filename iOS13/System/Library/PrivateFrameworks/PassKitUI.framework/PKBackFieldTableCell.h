/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class PKPassField, UITextView;

@interface PKBackFieldTableCell : PKTableViewCell {

	PKPassField* _field;
	UITextView* _valueTextView;
	double _cachedWidth;
	double _computedHeight;
	BOOL _showLinks;

}

@property (nonatomic,retain) PKPassField * field;              //@synthesize field=_field - In the implementation block
@property (assign,nonatomic) BOOL showLinks;                   //@synthesize showLinks=_showLinks - In the implementation block
+(id)reuseIdentifier;
+(id)titleFont;
+(id)_linkTextAttributes;
+(id)valueFont;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(PKPassField *)field;
-(void)setField:(PKPassField *)arg1 ;
-(CGRect)_textBounds;
-(void)setShowLinks:(BOOL)arg1 ;
-(id)initWithField:(id)arg1 showLinks:(BOOL)arg2 ;
-(void)_detectLinks;
-(void)_setupTextAttributes;
-(BOOL)showLinks;
@end

