/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)locked;
-(void)unlock;
-(id)initWithPath:(id)arg1 ;
-(NSString *)path;
-(BOOL)tryLock:(BOOL)arg1 ;
-(BOOL)lock:(BOOL)arg1 ;
-(BOOL)lockWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)_lock:(BOOL)arg1 blocking:(BOOL)arg2 ;
-(void)dealloc;
@end

