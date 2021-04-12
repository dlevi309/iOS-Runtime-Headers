/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
*/


@class NSString;

@interface MTLockedFile : NSObject {

	int _fd;
	NSString* _fileName;

}

@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) int fd;                           //@synthesize fd=_fd - In the implementation block
+(id)lockFile:(id)arg1 openFlags:(int)arg2 ;
-(void)dealloc;
-(void)close;
-(id)fileHandle;
-(int)fd;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setFd:(int)arg1 ;
-(id)initWithFileName:(id)arg1 openFlags:(int)arg2 ;
-(void)lockWithPromise:(id)arg1 ;
@end

