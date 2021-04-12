/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAutoPlacement.h>

@protocol SXAdvertisementPlacementType, SXSuggestedArticlesPlacementType;
@class NSString;

@interface SXResolvedAutoPlacement : NSObject <SXAutoPlacement> {

	id<SXAdvertisementPlacementType> _advertisement;
	id<SXSuggestedArticlesPlacementType> _suggestedArticles;

}

@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement;                      //@synthesize advertisement=_advertisement - In the implementation block
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles;              //@synthesize suggestedArticles=_suggestedArticles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXAdvertisementPlacementType>)advertisement;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id)initWithAdvertisement:(id)arg1 suggestedArticles:(id)arg2 ;
@end

