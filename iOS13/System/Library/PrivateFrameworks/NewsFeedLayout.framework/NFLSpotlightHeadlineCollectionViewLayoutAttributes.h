/*
* Generated on Monday, March 1, 2021 at 2:34:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@interface NFLSpotlightHeadlineCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes {

	double _shadowRadius;
	double _shadowOpacity;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) double shadowRadius;               //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowOpacity;              //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)shadowRadius;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(double)shadowOpacity;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
@end

