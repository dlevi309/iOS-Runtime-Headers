/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSArray;

@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner {

	NSArray* _changes;
	unsigned long long _currentIdx;

}

@property (nonatomic,readonly) unsigned long long changeCount; 
-(unsigned long long)changeCount;
-(unsigned)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(id)initWithChanges:(id)arg1 ;
@end

