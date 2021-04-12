/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_errorWithErrno:(int)arg1 sourceURL:(id)arg2 destinationURL:(id)arg3 ;
+(id)filesystemItemMoveOperationWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3 ;
-(id)delegate;
-(BOOL)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4 ;
-(void)_setError:(id)arg1 ;
-(id)error;
-(void)setDelegate:(id)arg1 ;
-(void)main;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 options:(unsigned long long)arg3 ;
-(void)dealloc;
@end

