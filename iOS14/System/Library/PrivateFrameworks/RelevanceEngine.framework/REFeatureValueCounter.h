/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class NSPointerArray;

@interface REFeatureValueCounter : NSObject {

	unsigned long long _count;
	NSPointerArray* _values;
	REFancyShrinkingDictionary* _indicies;
	opaque_pthread_rwlock_t _lock;

}

@property (assign,nonatomic) unsigned long long count;              //@synthesize count=_count - In the implementation block
-(void)setCount:(unsigned long long)arg1 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(unsigned long long)totalCount;
-(unsigned long long)count;
-(unsigned long long)countForValue:(id)arg1 ;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)_updateConfigurationForCount:(unsigned long long)arg1 ;
-(unsigned long long)trackedValueForValue:(id)arg1 ;
-(id)_createErrorWithCode:(unsigned long long)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
@end

