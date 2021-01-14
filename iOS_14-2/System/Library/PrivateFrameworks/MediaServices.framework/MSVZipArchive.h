/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
*/


#import <MediaServices/MediaServices-Structs.h>
@class NSString, NSMutableArray;

@interface MSVZipArchive : NSObject {

	BOMSysRef _bomsys;
	NSString* _archivePath;
	NSMutableArray* _filesToArchive;

}
-(id)initWithContentsOfFile:(id)arg1 ;
-(void)addFileAtPath:(id)arg1 ;
-(BOOL)writeToFileAtPath:(id)arg1 withError:(id*)arg2 ;
-(BOOL)decompressToPath:(id)arg1 withError:(id*)arg2 ;
-(id)init;
-(void)dealloc;
@end

