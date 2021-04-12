/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXAdComponent.h>
#import <libobjc.A.dylib/SXBannerAdComponent.h>

@protocol SXBannerAdComponent <SXAdComponent>
@property (nonatomic,readonly) unsigned long long bannerType; 
@required
-(unsigned long long)bannerType;

@end


@class NSString, SXJSONArray, SXComponentAnimation, SXComponentConditions, SXJSONDictionary, SXComponentClassification, UIColor;

@interface SXBannerAdComponent : SXAdComponent <SXBannerAdComponent>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors; 
@property (nonatomic,readonly) SXComponentAnimation * animation; 
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions; 
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics; 
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) SXJSONDictionary * advertising; 
@property (nonatomic,readonly) unsigned long long adType; 
@property (nonatomic,readonly) UIColor * debugColor; 
@property (nonatomic,readonly) unsigned long long placementType; 
@property (nonatomic,readonly) unsigned long long bannerType; 
+(unsigned long long)bannerTypeFromString:(id)arg1 ;
-(unsigned long long)bannerType;
-(unsigned long long)adType;
-(unsigned long long)bannerTypeWithValue:(id)arg1 withType:(int)arg2 ;
@end

