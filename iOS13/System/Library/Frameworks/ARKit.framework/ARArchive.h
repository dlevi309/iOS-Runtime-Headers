/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


#import <ARKit/ARKit-Structs.h>
@class NSMutableDictionary, NSArray;

@interface ARArchive : NSObject {

	NSMutableDictionary* _dataByPath;

}

@property (nonatomic,copy,readonly) NSArray * filePaths; 
-(id)init;
-(id)initWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_loadArchiveFromURL:(id)arg1 error:(id*)arg2 ;
-(void)addData:(id)arg1 withPath:(id)arg2 ;
-(id)dataForResourceAtPath:(id)arg1 ;
-(BOOL)_readDataForEntry:(archive_entryRef)arg1 archive:(archiveRef)arg2 ;
-(NSArray *)filePaths;
-(void)addData:(id)arg1 withFilename:(id)arg2 extension:(id)arg3 ;
-(id)dataForResource:(id)arg1 withExtension:(id)arg2 ;
@end

