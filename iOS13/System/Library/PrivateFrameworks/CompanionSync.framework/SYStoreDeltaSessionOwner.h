/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithChanges:(id)arg1 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
@end

