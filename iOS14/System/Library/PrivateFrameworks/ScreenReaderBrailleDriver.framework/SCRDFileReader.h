/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)start;
-(void)_readHandler:(id)arg1 ;
-(BOOL)hasStarted;
-(BOOL)isValid;
-(void)invalidate;
-(void)dealloc;
-(void)invalidateWithWait:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 fileHandle:(id)arg2 ;
@end

