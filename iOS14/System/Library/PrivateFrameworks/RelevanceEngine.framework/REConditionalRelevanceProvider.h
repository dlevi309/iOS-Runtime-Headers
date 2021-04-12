/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider {

	RERelevanceCondition* _condition;

}

@property (nonatomic,readonly) RERelevanceCondition * condition; 
-(RERelevanceCondition *)condition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)initWithRelevanceCondition:(id)arg1 ;
-(float)_evaluateCondition;
@end

