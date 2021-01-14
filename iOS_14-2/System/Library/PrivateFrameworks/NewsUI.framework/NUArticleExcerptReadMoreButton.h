/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSURL, UILabel, UIImageView;

@interface NUArticleExcerptReadMoreButton : UIButton {

	unsigned long long _excerptLenthType;
	NSURL* _domainURL;
	UILabel* _readStoryLabel;
	UILabel* _domainLabel;
	UIImageView* _arrowImageView;

}

@property (nonatomic,readonly) UILabel * readStoryLabel;                       //@synthesize readStoryLabel=_readStoryLabel - In the implementation block
@property (nonatomic,readonly) UILabel * domainLabel;                          //@synthesize domainLabel=_domainLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * arrowImageView;                   //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (assign,nonatomic) unsigned long long excerptLenthType;              //@synthesize excerptLenthType=_excerptLenthType - In the implementation block
@property (nonatomic,retain) NSURL * domainURL;                                //@synthesize domainURL=_domainURL - In the implementation block
+(double)readMoreButtonHeight;
+(id)arrowImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)domainLabel;
-(void)setDomainURL:(NSURL *)arg1 ;
-(NSURL *)domainURL;
-(void)setExcerptLenthType:(unsigned long long)arg1 ;
-(UILabel *)readStoryLabel;
-(UIImageView *)arrowImageView;
-(unsigned long long)excerptLenthType;
@end

