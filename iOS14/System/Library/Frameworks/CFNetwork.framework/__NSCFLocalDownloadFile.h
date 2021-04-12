/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/


@protocol OS_dispatch_io, OS_dispatch_queue, __NSCFLocalDownloadFileOpener;
#import <CFNetwork/CFNetwork-Structs.h>
@class NSObject, NSString;

@interface __NSCFLocalDownloadFile : NSObject {

	stat _stat;
	NSObject*<OS_dispatch_io> _writeIO;
	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _finished;
	NSString* _path;
	BOOL _createdPlaceholder;
	BOOL _skipUnlink;
	BOOL _truncateFile;
	int _error;
	id<__NSCFLocalDownloadFileOpener> _fileProvider;
	/*^block*/id _finishCompletion;

}

@property (retain) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)setPath:(NSString *)arg1 ;
-(NSString *)path;
-(void)dealloc;
@end

