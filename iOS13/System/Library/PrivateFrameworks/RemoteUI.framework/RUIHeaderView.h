/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class UILabel, RUILinkLabel, UIImageView, NSString;

@interface RUIHeaderView : UIView <RUIHeader> {

	UILabel* _headerLabel;
	RUILinkLabel* _detailHeaderLabel;
	UILabel* _subHeaderLabel;
	UIImageView* _iconView;
	int _imageAlignment;
	BOOL _isFirstSection;
	BOOL _customIconSize;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) UIEdgeInsets margins;                  //@synthesize margins=_margins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(id)iconImage;
-(id)headerLabel;
-(void)setIconImage:(id)arg1 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(id)detailHeaderLabel;
-(void)setImageAlignment:(int)arg1 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
-(double)_headerOffsetInView:(id)arg1 ;
-(BOOL)_hasIcon;
-(void)setHeaderAlignment:(long long)arg1 ;
-(void)setHeaderColor:(id)arg1 ;
-(void)setSubHeaderAlignment:(long long)arg1 ;
-(void)setSubHeaderColor:(id)arg1 ;
-(void)setDetailHeaderColor:(id)arg1 ;
-(double)_imageTitlePaddingInView:(id)arg1 ;
-(double)_titleSubtitlePaddingInView:(id)arg1 ;
@end

