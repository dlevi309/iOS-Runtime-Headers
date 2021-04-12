/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class SXComponentLayoutRules, SXComponentTextRules, NSArray;

@interface SXComponentClassification : NSObject {

	SXComponentLayoutRules* _layoutRules;
	SXComponentTextRules* _textRules;
	NSArray* _defaultStyleIdentifiers;

}

@property (nonatomic,readonly) NSArray * defaultStyleIdentifiers;                       //@synthesize defaultStyleIdentifiers=_defaultStyleIdentifiers - In the implementation block
@property (nonatomic,readonly) SXComponentLayoutRules * layoutRules;                    //@synthesize layoutRules=_layoutRules - In the implementation block
@property (nonatomic,readonly) SXComponentTextRules * textRules;                        //@synthesize textRules=_textRules - In the implementation block
@property (nonatomic,readonly) NSArray * defaultTextStyleIdentifiers; 
@property (nonatomic,readonly) NSArray * defaultComponentStyleIdentifiers; 
@property (nonatomic,readonly) unsigned long long contentRelevance; 
+(void)initialize;
+(int)role;
+(id)typeString;
+(id)roleString;
+(BOOL)shouldRegister;
+(id)classificationForComponentWithRole:(int)arg1 ;
+(id)classificationForComponentWithType:(id)arg1 role:(id)arg2 ;
+(id)classificationForClass:(Class)arg1 ;
+(void)registerClassification;
+(id)classificationForComponentWithType:(id)arg1 ;
-(id)init;
-(BOOL)isCollapsible;
-(SXComponentTextRules *)textRules;
-(BOOL)hasAffiliationWithClassification:(id)arg1 forDirection:(long long)arg2 ;
-(id)accessibilityContextualLabel;
-(unsigned long long)contentRelevance;
-(id)accessibilityCustomRotorMembership;
-(SXComponentLayoutRules *)layoutRules;
-(Class)componentModelClass;
-(NSArray *)defaultComponentStyleIdentifiers;
-(NSArray *)defaultTextStyleIdentifiers;
-(BOOL)accessibilitySkippedDuringReadAll;
-(void)setupStyleIdentifiers;
-(NSArray *)defaultStyleIdentifiers;
@end

