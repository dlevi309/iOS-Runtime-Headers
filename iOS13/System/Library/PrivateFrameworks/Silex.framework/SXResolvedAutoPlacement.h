/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAutoPlacement.h>

@protocol SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;
@class NSString;

@interface SXResolvedAutoPlacement : NSObject <SXAutoPlacement> {

	id<SXAdvertisementPlacementType> _advertisement;
	id<SXSuggestedArticlesPlacementType> _suggestedArticles;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement;                      //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles;              //@synthesize suggestedArticles=_suggestedArticles - In the implementation block
-(id<SXAdvertisementPlacementType>)advertisement;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id)initWithAdvertisement:(id)arg1 suggestedArticles:(id)arg2 ;
@end

