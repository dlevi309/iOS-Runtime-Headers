/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSOperation.h>

@class NSString, NSError, NSMutableArray;

@interface NSDirectoryTraversalOperation : NSOperation {

	id _delegate;
	NSString* _sourcePath;
	NSError* _error;
	void* _stream;
	int _optionsFlags;
	int _lastDeviceInode;
	BOOL _shouldFilterUnderbars;
	BOOL _stopped;
	NSMutableArray* _deviceEntryPoints;
	NSMutableArray* _deviceNumbers;

}
+(BOOL)_needsStatInfo;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
+(id)directoryTraversalOperationAtPath:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)error;
-(id)initWithPath:(id)arg1 ;
-(BOOL)_shouldFilterEntry:(ftsent*)arg1 ;
-(void)handlePathname:(id)arg1 ;
-(BOOL)shouldProceedAfterError:(id)arg1 ;
-(void)_setError:(id)arg1 ;
-(BOOL)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(void)main;
@end

