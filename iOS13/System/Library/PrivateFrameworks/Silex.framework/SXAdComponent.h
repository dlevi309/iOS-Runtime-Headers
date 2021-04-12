/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXAdComponent.h>
@class UIColor;


@protocol SXAdComponent <SXComponent,SXComponentAdvertisingMetadataProviding>
@property (nonatomic,readonly) unsigned long long adType; 
@property (nonatomic,readonly) UIColor * debugColor; 
@property (nonatomic,readonly) unsigned long long placementType; 
@required
-(unsigned long long)adType;
-(unsigned long long)placementType;
-(UIColor *)debugColor;

@end


@class UIColor, NSString, SXJSONArray, SXComponentAnimation, SXComponentConditions, SXJSONDictionary, SXComponentClassification;

@interface SXAdComponent : SXComponent <SXAdComponent> {

	unsigned long long adType;

}

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
-(SXJSONDictionary *)advertising;
-(unsigned long long)traits;
-(unsigned long long)adType;
-(unsigned long long)placementType;
-(UIColor *)debugColor;
@end

