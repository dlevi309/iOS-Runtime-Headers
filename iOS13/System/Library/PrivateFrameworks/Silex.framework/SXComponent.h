/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXComponent.h>

@protocol SXComponent <SXComponentProperties,SXConditionalObject>
@end


@class SXComponentAnimation, SXComponentClassification, NSString, SXJSONArray, SXComponentConditions, SXJSONDictionary;

@interface SXComponent : SXJSONObject <SXComponent> {

	SXComponentAnimation* backingAnimation;
	SXComponentClassification* _classification;

}

@property (nonatomic,retain) SXComponentAnimation * backingAnimation; 
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
@property (nonatomic,readonly) SXComponentClassification * classification;              //@synthesize classification=_classification - In the implementation block
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
+(/*^block*/id)purgeClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)conditional;
-(SXJSONArray *)additions;
-(SXJSONDictionary *)analytics;
-(unsigned long long)contentRelevance;
-(SXComponentConditions *)conditions;
-(NSString *)type;
-(NSString *)identifier;
-(BOOL)hidden;
-(SXComponentAnimation *)animation;
-(SXJSONArray *)behaviors;
-(id<SXComponentAnchor>)anchor;
-(NSString *)style;
-(NSString *)layout;
-(NSString *)description;
-(int)role;
-(unsigned long long)traits;
-(SXComponentClassification *)classification;
-(SXComponentAnimation *)backingAnimation;
-(void)setBackingAnimation:(SXComponentAnimation *)arg1 ;
-(id)animationWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)contentRelevanceWithValue:(id)arg1 withType:(int)arg2 ;
@end

