/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)setStyle:(long long)arg1 ;
-(void)setText:(id)arg1 ;
-(id)_label;
-(void)layoutSubviews;
-(void)sizeToFit;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_updateLabel;
-(void)setShouldDrawUnderline:(BOOL)arg1 ;
-(BOOL)shouldDrawUnderline;
@end

