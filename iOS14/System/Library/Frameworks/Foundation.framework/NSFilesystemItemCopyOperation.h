/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
+(id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)_validatePaths:(id*)arg1 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(BOOL)_shouldProceedAfterErrno:(int)arg1 copyingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
-(BOOL)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 options:(unsigned long long)arg3 ;
-(BOOL)_shouldCopyItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
-(void)dealloc;
-(BOOL)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2 ;
@end

