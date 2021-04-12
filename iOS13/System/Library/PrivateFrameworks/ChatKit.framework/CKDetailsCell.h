/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView;

@interface CKDetailsCell : UITableViewCell {

	BOOL _indentTopSeperator;
	BOOL _indentBottomSeperator;
	UIView* _topSeperator;
	UIView* _bottomSeperator;

}

@property (nonatomic,retain) UIView * topSeperator;                   //@synthesize topSeperator=_topSeperator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeperator;                //@synthesize bottomSeperator=_bottomSeperator - In the implementation block
@property (assign,nonatomic) BOOL indentTopSeperator;                 //@synthesize indentTopSeperator=_indentTopSeperator - In the implementation block
@property (assign,nonatomic) BOOL indentBottomSeperator;              //@synthesize indentBottomSeperator=_indentBottomSeperator - In the implementation block
-(void)prepareForReuse;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)indentTopSeperator;
-(UIView *)topSeperator;
-(BOOL)indentBottomSeperator;
-(UIView *)bottomSeperator;
-(void)setIndentTopSeperator:(BOOL)arg1 ;
-(void)setIndentBottomSeperator:(BOOL)arg1 ;
-(void)setTopSeperator:(UIView *)arg1 ;
-(void)setBottomSeperator:(UIView *)arg1 ;
@end

