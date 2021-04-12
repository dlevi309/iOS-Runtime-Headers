/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setExcerptFontName:(id)arg1 ;
-(void)setExcerptFontSize:(double)arg1 ;
-(id)excerptFontName;
-(double)excerptFontSize;
-(void)setExcerptLineHeight:(double)arg1 ;
-(double)excerptLineHeight;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
-(NSRange)titleNextToImageRange;
-(void)setTitleNextToImageRange:(NSRange)arg1 ;
-(CGRect)titleNextToImageFrame;
-(void)setTitleNextToImageFrame:(CGRect)arg1 ;
-(CGRect)titleBellowImageFrame;
-(void)setTitleBellowImageFrame:(CGRect)arg1 ;
@end

