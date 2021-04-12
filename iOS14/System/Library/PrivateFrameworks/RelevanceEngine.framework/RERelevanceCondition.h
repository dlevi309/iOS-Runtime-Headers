/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RERelevanceCondition : NSObject <NSCopying> {

	/*^block*/id _condition;

}
+(id)conditionWithBlock:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)initWithCondtionBlock:(/*^block*/id)arg1 ;
-(float)_evaluateRelevanceWithEnvironment:(id)arg1 ;
@end

