/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)recursiveSharedLockWithLockFilePath:(id)arg1 ;
+(id)os_log;
+(id)sharedLockWithLockFilePath:(id)arg1 ;
+(id)semaphoreSharedLockWithLockFilePath:(id)arg1 ;
-(void)unlock;
-(id)init;
-(BOOL)open:(id*)arg1 ;
-(void)lock;
-(NSString *)name;
-(id)description;
-(BOOL)isValid;
-(void)invalidate;
-(BOOL)isValidFileDescriptor;
-(id)errorUserInfo;
-(BOOL)ensureFileIsLocal:(/*^block*/id)arg1 ;
-(BOOL)openLockFile:(/*^block*/id)arg1 ;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 ;
-(void)lockRetryOnEDEADLK;
-(id)initWithLockFilePath:(id)arg1 localLock:(id)arg2 fileServices:(id)arg3 ;
-(BOOL)ensureFileDescriptorIsInvalid:(/*^block*/id)arg1 ;
-(id)errorUserInfoWithDescription:(id)arg1 ;
-(id)exceptionWithName:(id)arg1 reason:(id)arg2 ;
-(NSString *)lockFilePath;
-(void)setName:(NSString *)arg1 ;
-(void)dealloc;
@end

