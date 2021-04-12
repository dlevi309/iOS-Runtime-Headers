/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFilesystemItemCopyOperation.h>

@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation
+(BOOL)_needsStatInfo;
+(id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3 ;
+(id)filesystemItemLinkOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 ;
-(BOOL)_validatePaths:(id*)arg1 ;
-(BOOL)shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)_shouldProceedAfterErrno:(int)arg1 linkingItemAtPath:(const char*)arg2 toPath:(const char*)arg3 ;
-(void)_handleFTSEntry:(ftsent*)arg1 ;
-(BOOL)_shouldLinkItemAtPath:(const char*)arg1 toPath:(const char*)arg2 ;
@end

