/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXAutoPlacement.h>

@protocol SXAutoPlacement <NSObject>
@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement; 
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles; 
@required
-(id<SXAdvertisementPlacementType>)advertisement;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;

@end


@class NSString;

@interface SXAutoPlacement : SXJSONObject <SXAutoPlacement>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement; 
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id<SXAdvertisementPlacementType>)advertisement;
-(NSString *)description;
@end

