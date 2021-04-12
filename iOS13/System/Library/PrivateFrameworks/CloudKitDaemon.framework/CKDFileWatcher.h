/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol OS_dispatch_source;
@class NSString, NSObject;

@interface CKDFileWatcher : NSObject {

	int _fd;
	NSString* _path;
	NSObject*<OS_dispatch_source> _source;

}

@property (nonatomic,retain) NSString * path;                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int fd;                                            //@synthesize fd=_fd - In the implementation block
+(id)queue;
-(void)dealloc;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(int)fd;
-(void)setFd:(int)arg1 ;
@end

