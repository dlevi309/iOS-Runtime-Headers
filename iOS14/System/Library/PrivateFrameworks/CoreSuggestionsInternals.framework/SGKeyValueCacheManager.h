/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, NSMutableArray;

@interface SGKeyValueCacheManager : NSObject {

	NSString* _basePath;
	NSMutableArray* _cacheFiles;
	opaque_pthread_mutex_t _lock;

}
-(id)cacheOfType:(unsigned long long)arg1 ;
-(id)initInMemory;
-(id)init;
-(void)replaceCacheOfType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)cacheOfType:(unsigned long long)arg1 forceReadFromDisk:(BOOL)arg2 ;
-(void)deleteValueByRecordIdSet:(id)arg1 ;
-(id)initWithBasePath:(id)arg1 ;
@end

