/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AttentionAwareness/AttentionAwareness-Structs.h>
@class NSObject;

@interface AWPersistentDataManager : NSObject {

	void* _shm_obj;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	unsigned long long _loadAbsTime;

}
+(id)sharedManager;
+(void)initAWPersistentDataHeader:(SCD_Struct_AW3*)arg1 ;
+(BOOL)validateAWPersistentDataHeader:(SCD_Struct_AW3*)arg1 ;
+(BOOL)truncateAWPersistentData:(int*)arg1 error:(id*)arg2 ;
+(BOOL)AWPersistentDataExists:(int*)arg1 ;
-(id)init;
-(void)loadPersistentData;
-(BOOL)checkPreconditions:(id*)arg1 ;
-(BOOL)isValidIndexForConnection:(id)arg1 index:(int)arg2 error:(id*)arg3 ;
-(int)nextFreeIndex;
-(int)openWithConnection:(id)arg1 error:(id*)arg2 ;
-(BOOL)closeWithConnection:(id)arg1 index:(int)arg2 error:(id*)arg3 ;
-(SCD_Struct_AW1*)clientStateWithConnection:(id)arg1 index:(int)arg2 error:(id*)arg3 ;
@end

