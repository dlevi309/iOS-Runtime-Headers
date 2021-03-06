/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXInsertableComponent.h>
#import <libobjc.A.dylib/SXBannerAdComponent.h>

@protocol SXComponentAnchor;
@class NSString, SXComponentAnimation, SXJSONArray, SXComponentConditions, SXJSONDictionary, UIColor, SXComponentClassification;

@interface SXInsertedAdComponent : NSObject <SXInsertableComponent, SXBannerAdComponent> {

	BOOL _hidden;
	NSString* _identifier;
	SXComponentAnimation* _animation;
	SXJSONArray* _behaviors;
	unsigned long long _bannerType;
	unsigned long long _adType;
	NSString* _placementIdentifier;
	NSString* _style;
	id<SXComponentAnchor> _anchor;
	NSString* _layout;
	SXComponentConditions* _conditions;
	SXJSONDictionary* _advertising;
	SXJSONDictionary* _analytics;
	SXJSONArray* _additions;

}

@property (nonatomic,retain) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * layout;                                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) id<SXComponentAnchor> anchor;                              //@synthesize anchor=_anchor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long bannerType;                           //@synthesize bannerType=_bannerType - In the implementation block
@property (nonatomic,readonly) NSString * placementIdentifier;                          //@synthesize placementIdentifier=_placementIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long adType;                               //@synthesize adType=_adType - In the implementation block
@property (nonatomic,readonly) UIColor * debugColor; 
@property (nonatomic,readonly) unsigned long long placementType; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions;                      //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics;                            //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions;                                 //@synthesize additions=_additions - In the implementation block
@property (nonatomic,readonly) NSString * style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) SXJSONArray * behaviors;                                 //@synthesize behaviors=_behaviors - In the implementation block
@property (nonatomic,readonly) SXComponentAnimation * animation;                        //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                                             //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) SXJSONDictionary * advertising;                          //@synthesize advertising=_advertising - In the implementation block
-(SXJSONDictionary *)analytics;
-(SXComponentConditions *)conditions;
-(unsigned long long)traits;
-(SXJSONArray *)behaviors;
-(SXJSONDictionary *)advertising;
-(SXComponentAnimation *)animation;
-(BOOL)hidden;
-(unsigned long long)bannerType;
-(unsigned long long)adType;
-(SXComponentClassification *)classification;
-(NSString *)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(id<SXComponentAnchor>)anchor;
-(NSString *)identifier;
-(void)setAnchor:(id<SXComponentAnchor>)arg1 ;
-(int)role;
-(SXJSONArray *)additions;
-(void)setLayout:(NSString *)arg1 ;
-(NSString *)style;
-(NSString *)layout;
-(unsigned long long)contentRelevance;
-(NSString *)placementIdentifier;
-(UIColor *)debugColor;
-(unsigned long long)placementType;
-(id)initWithAdType:(unsigned long long)arg1 ;
@end

