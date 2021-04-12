/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLFeedCollectionViewLayoutAttributes.h>

@class NSParagraphStyle, UIFont, UIColor, NSString;

@interface NFLCollapsedHeadlineViewLayoutAttributes : NFLFeedCollectionViewLayoutAttributes {

	NSParagraphStyle* _titleParagraphStyle;
	long long _titleNumberOfLines;
	UIFont* _titleFont;
	UIFont* _publisherTextFont;
	UIColor* _publisherTextColor;
	long long _publisherTextNumberOfLines;
	NSParagraphStyle* _publisherTextParagraphStyle;
	NSString* _titleFontName;
	double _titleFontSize;
	CGRect _titleFrame;
	CGRect _publisherLogoFrame;
	CGRect _publisherTextFrame;

}

@property (assign,nonatomic) CGRect titleFrame;                                             //@synthesize titleFrame=_titleFrame - In the implementation block
@property (nonatomic,retain) NSString * titleFontName;                                      //@synthesize titleFontName=_titleFontName - In the implementation block
@property (assign,nonatomic) double titleFontSize;                                          //@synthesize titleFontSize=_titleFontSize - In the implementation block
@property (assign,nonatomic) long long titleNumberOfLines;                                  //@synthesize titleNumberOfLines=_titleNumberOfLines - In the implementation block
@property (nonatomic,retain) UIFont * titleFont;                                            //@synthesize titleFont=_titleFont - In the implementation block
@property (assign,nonatomic) CGRect publisherLogoFrame;                                     //@synthesize publisherLogoFrame=_publisherLogoFrame - In the implementation block
@property (assign,nonatomic) CGRect publisherTextFrame;                                     //@synthesize publisherTextFrame=_publisherTextFrame - In the implementation block
@property (nonatomic,retain) UIFont * publisherTextFont;                                    //@synthesize publisherTextFont=_publisherTextFont - In the implementation block
@property (nonatomic,copy) UIColor * publisherTextColor;                                    //@synthesize publisherTextColor=_publisherTextColor - In the implementation block
@property (assign,nonatomic) long long publisherTextNumberOfLines;                          //@synthesize publisherTextNumberOfLines=_publisherTextNumberOfLines - In the implementation block
@property (nonatomic,readonly) NSParagraphStyle * titleParagraphStyle;                      //@synthesize titleParagraphStyle=_titleParagraphStyle - In the implementation block
@property (nonatomic,readonly) NSParagraphStyle * publisherTextParagraphStyle;              //@synthesize publisherTextParagraphStyle=_publisherTextParagraphStyle - In the implementation block
+(double)publisherTextHeightForLabelSize:(CGSize)arg1 font:(id)arg2 ;
+(id)layoutAttributesForCellWithIndexPath:(id)arg1 feedSettings:(id)arg2 ;
+(CGSize)publisherLogoSizeFeedSettings:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)titleFrame;
-(UIFont *)titleFont;
-(void)setTitleFont:(UIFont *)arg1 ;
-(NSString *)titleFontName;
-(double)titleFontSize;
-(void)setTitleFontName:(NSString *)arg1 ;
-(void)setTitleFontSize:(double)arg1 ;
-(void)setTitleFrame:(CGRect)arg1 ;
-(void)setPublisherLogoFrame:(CGRect)arg1 ;
-(CGRect)publisherLogoFrame;
-(long long)titleNumberOfLines;
-(void)setTitleNumberOfLines:(long long)arg1 ;
-(CGRect)publisherTextFrame;
-(void)setPublisherTextFrame:(CGRect)arg1 ;
-(UIFont *)publisherTextFont;
-(void)setPublisherTextFont:(UIFont *)arg1 ;
-(UIColor *)publisherTextColor;
-(void)setPublisherTextColor:(UIColor *)arg1 ;
-(long long)publisherTextNumberOfLines;
-(void)setPublisherTextNumberOfLines:(long long)arg1 ;
-(NSParagraphStyle *)titleParagraphStyle;
-(NSParagraphStyle *)publisherTextParagraphStyle;
@end

