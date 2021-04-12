/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_queue, HDHFDataStoreDelegate;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSObject, NSString;

@interface HDHFDataStore : NSObject {

	shared_ptr<health::VirtualFilesystem>* _fileSystem;
	os_unfair_lock_s _lock;
	shared_ptr<health::DataStore>* _highFrequencyDataStore;
	AB _invalidated;
	AB _hasOpenStore;
	NSObject*<OS_dispatch_queue> _openQueue;
	id<HDHFDataStoreDelegate> _delegate;
	NSString* _fileSystemPath;

}

@property (assign,nonatomic,__weak) id<HDHFDataStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * fileSystemPath;                       //@synthesize fileSystemPath=_fileSystemPath - In the implementation block
-(BOOL)accessStoreWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(id<HDHFDataStoreDelegate>)delegate;
-(NSString *)fileSystemPath;
-(id)initWithPath:(id)arg1 ;
-(BOOL)discardStoreWithError:(id*)arg1 ;
-(shared_ptr<health::DataStore>*)_lock_primitiveOpenHighFrequencyDataStoreWithError:(id*)arg1 ;
-(void)setDelegate:(id<HDHFDataStoreDelegate>)arg1 ;
-(shared_ptr<health::DataStore>*)_lock_highFrequencyDataStoreWithError:(id*)arg1 ;
-(id)description;
-(shared_ptr<health::DataStore>*)_highFrequencyDataStoreWithError:(id*)arg1 ;
-(/*^block*/id)flushHandlerForInvalidation:(BOOL)arg1 ;
-(BOOL)archiveHFDTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)_lock_openHighFrequencyDataStoreWithError:(id*)arg1 ;
-(id)initWithPath:(id)arg1 fileSystem:(shared_ptr<health::VirtualFilesystem>*)arg2 ;
-(BOOL)_convertExceptionsToError:(id*)arg1 inBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

