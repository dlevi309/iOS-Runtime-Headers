/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKKeyedDataStoreProtocol.h>

@class NSURL, NSFileManager, NSString;

@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol> {

	NSURL* _directoryURL;
	NSFileManager* _fileManager;

}

@property (nonatomic,retain) NSURL * directoryURL;                     //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,retain) NSFileManager * fileManager;              //@synthesize fileManager=_fileManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)URLForKey:(id)arg1 ;
-(NSURL *)directoryURL;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(NSFileManager *)fileManager;
-(void)setFileManager:(NSFileManager *)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(id)dataForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)removeDataForKey:(id)arg1 error:(id*)arg2 ;
-(BOOL)isKeyValid:(id)arg1 ;
-(BOOL)removeAllDataWithError:(id*)arg1 ;
@end

