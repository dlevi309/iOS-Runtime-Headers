/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style;                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors;                                 //@synthesize behaviors=_behaviors - In the implementation block
@property (nonatomic,readonly) SXComponentAnimation * animation;                        //@synthesize animation=_animation - In the implementation block
@property (nonatomic,readonly) BOOL hidden; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) SXComponentConditions * conditions;                      //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) SXJSONDictionary * analytics;                            //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions;                                 //@synthesize additions=_additions - In the implementation block
@property (nonatomic,readonly) SXJSONArray * conditional; 
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
-(SXComponentConditions *)conditions;
-(SXComponentClassification *)classification;
-(SXJSONArray *)additions;
-(unsigned long long)contentRelevance;
@end

