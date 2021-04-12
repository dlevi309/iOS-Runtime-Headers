/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/RBAssertionOriginatorPidPersisting.h>
#import <libobjc.A.dylib/RBStateCapturing.h>

@class NSString;

@interface RBAssertionOriginatorPidStore : NSObject <RBAssertionOriginatorPidPersisting, RBStateCapturing> {

	SCD_Struct_RB6* _header;
	NSString* _path;
	int* _pids;
	int _headerID;
	int _pidsID;
	os_unfair_lock_s _lock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stateCaptureTitle; 
-(void)dealloc;
-(NSString *)debugDescription;
-(BOOL)isValid;
-(id)initWithPath:(id)arg1 ;
-(id)captureState;
-(NSString *)stateCaptureTitle;
-(void)removePid:(int)arg1 ;
-(void)addPid:(int)arg1 ;
-(void)_allocSharedMemory;
-(void)_lock_deallocSharedMemory;
-(void)_lock_addPidToSharedMemory:(int)arg1 ;
-(void)_lock_removePidFromSharedMemory:(int)arg1 ;
-(BOOL)_lock_containsPid:(int)arg1 ;
-(BOOL)_lock_allocSharedMemoryWithName:(const char*)arg1 size:(unsigned long long)arg2 address:(out void*)arg3 fileDescriptor:(out int*)arg4 created:(out BOOL*)arg5 ;
-(BOOL)_lock_isHeaderValid;
-(BOOL)_lock_isPidDataValid;
-(BOOL)_lock_resizeSharedMemoryIfNecessary;
-(void)_lock_sortSharedMemory;
-(unsigned)_lock_indexOfPidInSharedMemory:(int)arg1 ;
-(void)setValidProcesses:(id)arg1 ;
-(BOOL)containsPid:(int)arg1 ;
@end

