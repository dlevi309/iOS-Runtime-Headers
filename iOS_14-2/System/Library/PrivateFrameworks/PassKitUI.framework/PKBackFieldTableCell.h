/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)titleFont;
+(id)valueFont;
+(id)_linkTextAttributes;
+(id)reuseIdentifier;
-(PKPassField *)field;
-(void)_detectLinks;
-(void)_setupTextAttributes;
-(void)setShowLinks:(BOOL)arg1 ;
-(id)initWithField:(id)arg1 showLinks:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setField:(PKPassField *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)showLinks;
-(CGRect)_textBounds;
-(void)dealloc;
@end

