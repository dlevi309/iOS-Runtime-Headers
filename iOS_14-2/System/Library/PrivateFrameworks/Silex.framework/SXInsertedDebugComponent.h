/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDebugComponent.h>
#import <libobjc.A.dylib/SXInsertableComponent.h>

@protocol SXComponentAnchor;
@class NSString, SXComponentAnimation, SXJSONArray, SXComponentConditions, SXJSONDictionary, SXComponentClassification;

@interface SXInsertedDebugComponent : NSObject <SXDebugComponent, SXInsertableComponent> {

	NSString* _identifier;
	SXComponentAnimation* _animation;
	SXJSONArray* _behaviors;
	NSString* _style;
	id<SXComponentAnchor> _anchor;
	NSString* _layout;
	SXComponentConditions* _conditions;
	SXJSONDictionary* _analytics;
	SXJSONArray* _additions;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions;                      //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics;                            //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions;                                 //@synthesize additions=_additions - In the implementation block
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors;                                 //@synthesize behaviors=_behaviors - In the implementation block
@property (nonatomic,readonly) SXComponentAnimation * animation;                        //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) BOOL hidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
-(SXJSONDictionary *)analytics;
-(SXComponentConditions *)conditions;
-(unsigned long long)traits;
-(SXJSONArray *)behaviors;
-(SXComponentAnimation *)animation;
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
@end

