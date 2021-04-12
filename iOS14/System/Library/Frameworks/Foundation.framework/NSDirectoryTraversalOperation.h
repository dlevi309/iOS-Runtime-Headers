/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)directoryTraversalOperationAtPath:(id)arg1 ;
+(BOOL)_needsStatInfo;
+(id)_errorWithErrno:(int)arg1 atPath:(id)arg2 ;
-(BOOL)_validatePaths:(id*)arg1 ;
-(BOOL)_shouldFilterEntry:(ftsent*)arg1 ;
-(id)delegate;
-(id)initWithPath:(id)arg1 ;
-(void)handlePathname:(id)arg1 ;
-(void)_setError:(id)arg1 ;
-(id)error;
-(void)setDelegate:(id)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(void)main;
-(BOOL)shouldProceedAfterError:(id)arg1 ;
-(void)dealloc;
@end

