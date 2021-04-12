/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RERelevanceCondition : NSObject <NSCopying> {

	/*^block*/id _condition;

}
+(id)conditionWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(id)initWithCondtionBlock:(/*^block*/id)arg1 ;
-(float)_evaluateRelevanceWithEnvironment:(id)arg1 ;
@end

