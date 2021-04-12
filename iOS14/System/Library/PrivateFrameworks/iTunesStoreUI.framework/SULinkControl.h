/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UILabel;

@interface SULinkControl : UIControl {

	UILabel* _label;
	BOOL _shouldDrawUnderline;
	unsigned _sizeIsDirty : 1;
	long long _style;

}

@property (assign,nonatomic) BOOL shouldDrawUnderline;              //@synthesize shouldDrawUnderline=_shouldDrawUnderline - In the implementation block
-(id)_label;
-(void)_updateLabel;
-(void)setText:(id)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStyle:(long long)arg1 ;
-(void)sizeToFit;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setShouldDrawUnderline:(BOOL)arg1 ;
-(BOOL)shouldDrawUnderline;
@end

