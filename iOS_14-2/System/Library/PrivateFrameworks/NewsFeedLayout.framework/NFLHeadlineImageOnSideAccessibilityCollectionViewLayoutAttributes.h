/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@class NSString;

@interface NFLHeadlineImageOnSideAccessibilityCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes {

	NSString* _titleFontName;
	double _titleFontSize;
	double _titleLineHeight;
	NSRange _titleNextToImageRange;

}

@property (assign,nonatomic) NSRange titleNextToImageRange;              //@synthesize titleNextToImageRange=_titleNextToImageRange - In the implementation block
@property (assign,nonatomic) CGRect titleNextToImageFrame; 
@property (assign,nonatomic) CGRect titleBellowImageFrame; 
-(void)setExcerptFontSize:(double)arg1 ;
-(double)excerptLineHeight;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
-(id)excerptFontName;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(void)setExcerptLineHeight:(double)arg1 ;
-(void)setExcerptFontName:(id)arg1 ;
-(double)excerptFontSize;
-(void)setTitleNextToImageFrame:(CGRect)arg1 ;
-(CGRect)titleNextToImageFrame;
-(void)setTitleBellowImageFrame:(CGRect)arg1 ;
-(NSRange)titleNextToImageRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)titleBellowImageFrame;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTitleNextToImageRange:(NSRange)arg1 ;
@end

