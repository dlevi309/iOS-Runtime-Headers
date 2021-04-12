/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFFileCacheStore.h>

@class NSMutableDictionary, NSString;

@interface SBFFileCacheMemoryStore : NSObject <SBFFileCacheStore> {

	NSMutableDictionary* _fileWrappers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2 ;
-(void)fileCache:(id)arg1 storeFileWrapper:(id)arg2 ;
-(void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2 ;
-(void)removeAllFileWrappersForFileCache:(id)arg1 ;
-(NSString *)description;
@end

