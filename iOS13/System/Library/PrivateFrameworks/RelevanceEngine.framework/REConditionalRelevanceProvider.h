/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class RERelevanceCondition;

@interface REConditionalRelevanceProvider : RERelevanceProvider {

	RERelevanceCondition* _condition;

}

@property (nonatomic,readonly) RERelevanceCondition * condition; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(RERelevanceCondition *)condition;
-(id)initWithRelevanceCondition:(id)arg1 ;
-(float)_evaluateCondition;
@end

