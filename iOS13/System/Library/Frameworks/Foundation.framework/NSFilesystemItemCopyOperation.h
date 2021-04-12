/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSString, NSMutableSet;

@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation {

	NSString* _destinationPath;
	NSMutableSet* _skippedPaths;
	unsigned long long _options;

}
+(id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 options:(unsigned long long)arg3 ;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
-(void)dealloc;
-(BOOL)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)_shouldCopyItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
-(BOOL)_shouldProceedAfterErrno:(int)arg1 copyingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
@end

