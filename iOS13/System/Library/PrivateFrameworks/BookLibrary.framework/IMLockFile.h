/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class NSString;

@interface IMLockFile : NSObject {

	int _fd;
	BOOL _locked;
	NSString* _path;

}

@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL locked;                  //@synthesize locked=_locked - In the implementation block
+(id)iTunesSyncLockFile;
+(id)iTunesSyncLockFilePath;
-(void)dealloc;
-(void)unlock;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(BOOL)locked;
-(BOOL)lock:(BOOL)arg1 ;
-(BOOL)tryLock:(BOOL)arg1 ;
-(BOOL)lockWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_lock:(BOOL)arg1 blocking:(BOOL)arg2 ;
@end

