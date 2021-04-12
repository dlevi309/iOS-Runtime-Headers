/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/NSLocking.h>

@protocol NSLocking, CNFileServices;
@class NSString;

@interface CNProcessSharedLock : NSObject <NSLocking> {

	NSString* _lockFilePath;
	NSString* _name;
	id<NSLocking> _localLock;
	long long _localLockCount;
	int _fileDescriptor;
	id<CNFileServices> _fileServices;

}

@property (copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * lockFilePath;              //@synthesize lockFilePath=_lockFilePath - In the implementation block
+(id)os_log;
+(id)recursiveSharedLockWithLockFilePath:(id)arg1 ;
+(id)sharedLockWithLockFilePath:(id)arg1 ;
+(id)semaphoreSharedLockWithLockFilePath:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(void)invalidate;
-(BOOL)isValid;
-(void)lock;
-(void)unlock;
-(void)setName:(NSString *)arg1 ;
-(BOOL)open:(id*)arg1 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 fileServices:(id)arg3 ;
-(BOOL)ensureFileDescriptorIsInvalid:(/*^block*/id)arg1 ;
-(BOOL)openLockFile:(/*^block*/id)arg1 ;
-(BOOL)ensureFileIsLocal:(/*^block*/id)arg1 ;
-(BOOL)isValidFileDescriptor;
-(id)errorUserInfoWithDescription:(id)arg1 ;
-(id)errorUserInfo;
-(void)lockRetryOnEDEADLK;
-(id)exceptionWithName:(id)arg1 reason:(id)arg2 ;
-(NSString *)lockFilePath;
@end

