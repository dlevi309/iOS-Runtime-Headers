/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)AWPersistentDataExists:(int*)arg1 ;
+(BOOL)truncateAWPersistentData:(int*)arg1 error:(id*)arg2 ;
+(BOOL)validateAWPersistentDataHeader:(SCD_Struct_AW3*)arg1 ;
-(id)init;
-(int)openWithConnection:(id)arg1 error:(id*)arg2 ;
-(int)nextFreeIndex;
-(BOOL)checkPreconditions:(id*)arg1 ;
-(SCD_Struct_AW1*)clientStateWithConnection:(id)arg1 index:(int)arg2 error:(id*)arg3 ;
-(BOOL)closeWithConnection:(id)arg1 index:(int)arg2 error:(id*)arg3 ;
-(void)loadPersistentData;
-(BOOL)isValidIndexForConnection:(id)arg1 index:(int)arg2 error:(id*)arg3 ;
@end

