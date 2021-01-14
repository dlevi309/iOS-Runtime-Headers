/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) id<SXAdvertisementPlacementType> advertisement; 
@property (nonatomic,readonly) id<SXSuggestedArticlesPlacementType> suggestedArticles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
-(id<SXSuggestedArticlesPlacementType>)suggestedArticles;
-(id<SXAdvertisementPlacementType>)advertisement;
-(NSString *)description;
@end

