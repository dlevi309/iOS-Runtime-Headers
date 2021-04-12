/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
*/


@protocol SCRDFileReaderDelegate;
@class NSThread, NSFileHandle;

@interface SCRDFileReader : NSObject {

	id<SCRDFileReaderDelegate> _delegate;
	NSThread* _readerThread;
	NSFileHandle* _fileHandle;
	int _threadStartCount;

}
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(void)start;
-(BOOL)hasStarted;
-(void)_readHandler:(id)arg1 ;
-(void)invalidateWithWait:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 fileHandle:(id)arg2 ;
@end

