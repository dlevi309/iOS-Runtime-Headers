/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <NewsFeedLayout/NFLHeadlineCollectionViewLayoutAttributes.h>

@interface NFLPremiumHeadlineCollectionViewLayoutAttributes : NFLHeadlineCollectionViewLayoutAttributes {

	double _shadowRadius;
	double _shadowOpacity;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) double shadowRadius;               //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;               //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowOpacity;              //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
-(void)setShadowOffset:(CGSize)arg1 ;
-(double)shadowRadius;
-(void)populateWithProtobuf:(id)arg1 normalizedWithFeedGutter:(double)arg2 ;
-(double)shadowOpacity;
-(id)protobufRepresentationnormalizedWithFeedGutter:(double)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(CGSize)shadowOffset;
-(void)setShadowOpacity:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

