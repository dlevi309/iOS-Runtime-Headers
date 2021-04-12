/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOperation.h>

@class NSURL, NSError;

@interface NSFilesystemItemMoveOperation : NSOperation {

	id _delegate;
	NSURL* _sourceURL;
	NSURL* _destinationURL;
	NSError* _error;
	unsigned long long _options;

}
+(id)filesystemItemMoveOperationWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3 ;
+(id)_errorWithErrno:(int)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3 ;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)error;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(void)_setError:(id)arg1 ;
-(void)main;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3 ;
@end

