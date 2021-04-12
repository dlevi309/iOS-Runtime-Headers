/*
* Generated on Thursday, January 14, 2021 at 2:21:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)bottomSeperator;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(BOOL)indentTopSeperator;
-(BOOL)indentBottomSeperator;
-(void)setIndentTopSeperator:(BOOL)arg1 ;
-(void)setIndentBottomSeperator:(BOOL)arg1 ;
-(void)setTopSeperator:(UIView *)arg1 ;
-(void)setBottomSeperator:(UIView *)arg1 ;
-(UIView *)topSeperator;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

