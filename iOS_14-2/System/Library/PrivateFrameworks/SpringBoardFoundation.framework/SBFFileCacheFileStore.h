/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFFileCacheStore.h>

@class NSURL, NSString;

@interface SBFFileCacheFileStore : NSObject <SBFFileCacheStore> {

	NSURL* _directoryURL;

}

@property (nonatomic,copy,readonly) NSURL * directoryURL;              //@synthesize directoryURL=_directoryURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2 ;
-(void)fileCache:(id)arg1 storeFileWrapper:(id)arg2 ;
-(void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2 ;
-(void)removeAllFileWrappersForFileCache:(id)arg1 ;
-(NSString *)description;
-(id)fileURLForFileNamed:(id)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(NSURL *)directoryURL;
@end

