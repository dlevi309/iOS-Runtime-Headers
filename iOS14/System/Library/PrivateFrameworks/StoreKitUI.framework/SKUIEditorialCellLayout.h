/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUICellLayout.h>
#import <libobjc.A.dylib/SKUIEditorialLinkViewDelegate.h>

@class SKUIEditorialLinkView, SKUITextBoxView, NSString;

@interface SKUIEditorialCellLayout : SKUICellLayout <SKUIEditorialLinkViewDelegate> {

	UIEdgeInsets _contentInset;
	double _linkSpacing;
	SKUIEditorialLinkView* _linkView;
	SKUITextBoxView* _textBoxView;
	double _totalHeight;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;                    //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,readonly) SKUITextBoxView * textBoxView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(id)_linkView;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithParentView:(id)arg1 ;
-(void)dealloc;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)applyEditorialLayout:(id)arg1 withOrientation:(long long)arg2 expanded:(BOOL)arg3 ;
-(SKUITextBoxView *)textBoxView;
-(void)editorialLinkView:(id)arg1 didSelectLink:(id)arg2 ;
-(void)resetContentInset;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(id)_textBoxView;
-(void)_initContentInset;
@end

