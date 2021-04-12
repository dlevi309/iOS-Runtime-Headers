/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXInsertableComponent.h>
#import <libobjc.A.dylib/SXBannerAdComponent.h>

@protocol SXComponentAnchor;
@class NSString, SXComponentAnimation, SXJSONArray, SXComponentConditions, SXJSONDictionary, SXComponentClassification, UIColor;

@interface SXInsertedAdComponent : NSObject <SXInsertableComponent, SXBannerAdComponent> {

	BOOL _hidden;
	NSString* _identifier;
	SXComponentAnimation* _animation;
	SXJSONArray* _behaviors;
	unsigned long long _bannerType;
	unsigned long long _adType;
	NSString* _style;
	id<SXComponentAnchor> _anchor;
	NSString* _layout;
	SXComponentConditions* _conditions;
	SXJSONDictionary* _advertising;
	SXJSONDictionary* _analytics;
	SXJSONArray* _additions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * layout;                                         //@synthesize layout=_layout - In the implementation block
@property (nonatomic,retain) id<SXComponentAnchor> anchor;                              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) NSString * style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) SXJSONArray * behaviors;                                 //@synthesize behaviors=_behaviors - In the implementation block
@property (nonatomic,readonly) SXComponentAnimation * animation;                        //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                                             //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions;                      //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics;                            //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions;                                 //@synthesize additions=_additions - In the implementation block
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) SXJSONDictionary * advertising;                          //@synthesize advertising=_advertising - In the implementation block
@property (nonatomic,readonly) unsigned long long adType;                               //@synthesize adType=_adType - In the implementation block
@property (nonatomic,readonly) UIColor * debugColor; 
@property (nonatomic,readonly) unsigned long long placementType; 
@property (nonatomic,readonly) unsigned long long bannerType;                           //@synthesize bannerType=_bannerType - In the implementation block
-(NSString *)type;
-(int)role;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)style;
-(SXJSONDictionary *)analytics;
-(NSString *)layout;
-(void)setLayout:(NSString *)arg1 ;
-(SXComponentAnimation *)animation;
-(unsigned long long)traits;
-(id<SXComponentAnchor>)anchor;
-(SXJSONArray *)behaviors;
-(void)setAnchor:(id<SXComponentAnchor>)arg1 ;
-(BOOL)hidden;
-(SXComponentConditions *)conditions;
-(SXComponentClassification *)classification;
-(SXJSONDictionary *)advertising;
-(id)initWithAdType:(unsigned long long)arg1 ;
-(unsigned long long)adType;
-(SXJSONArray *)additions;
-(unsigned long long)contentRelevance;
-(unsigned long long)bannerType;
-(unsigned long long)placementType;
-(UIColor *)debugColor;
@end

