/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXComponent.h>
#import <libobjc.A.dylib/SXAdComponent.h>
@class NSString, UIColor;


@protocol SXAdComponent <SXComponent,SXComponentAdvertisingMetadataProviding>
@property (readonly,nonatomic) NSString * placementIdentifier; 
@property (readonly,nonatomic) unsigned long long adType; 
@property (readonly,nonatomic) UIColor * debugColor; 
@property (readonly,nonatomic) unsigned long long placementType; 
@required
-(unsigned long long)adType;
-(NSString *)placementIdentifier;
-(UIColor *)debugColor;
-(unsigned long long)placementType;

@end


@class NSString, UIColor, SXComponentConditions, SXJSONDictionary, SXComponentClassification, SXJSONArray, SXComponentAnimation;

@interface SXAdComponent : SXComponent <SXAdComponent> {

	unsigned long long adType;

}

@property (nonatomic,readonly) NSString * placementIdentifier; 
@property (nonatomic,readonly) unsigned long long adType; 
@property (nonatomic,readonly) UIColor * debugColor; 
@property (nonatomic,readonly) unsigned long long placementType; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions; 
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics; 
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors; 
@property (nonatomic,readonly) SXComponentAnimation * animation; 
@property (nonatomic,readonly) BOOL hidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) SXJSONDictionary * advertising; 
-(SXJSONDictionary *)advertising;
-(NSString *)placementIdentifier;
-(unsigned long long)traits;
-(unsigned long long)adType;
-(UIColor *)debugColor;
-(unsigned long long)placementType;
-(id)initWithJSONObject:(id)arg1 andVersion:(id)arg2 ;
@end

