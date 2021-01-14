/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


#import <ARKitCore/ARKitCore-Structs.h>
@class NSMutableDictionary, NSArray;

@interface ARArchive : NSObject {

	NSMutableDictionary* _dataByPath;

}

@property (nonatomic,copy,readonly) NSArray * filePaths; 
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(NSArray *)filePaths;
-(BOOL)_loadArchiveFromURL:(id)arg1 error:(id*)arg2 ;
-(void)addData:(id)arg1 withPath:(id)arg2 ;
-(id)dataForResourceAtPath:(id)arg1 ;
-(BOOL)_readDataForEntry:(archive_entryRef)arg1 archive:(archiveRef)arg2 ;
-(void)addData:(id)arg1 withFilename:(id)arg2 extension:(id)arg3 ;
-(id)dataForResource:(id)arg1 withExtension:(id)arg2 ;
@end

