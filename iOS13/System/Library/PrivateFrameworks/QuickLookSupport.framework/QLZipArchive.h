/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/


#import <QuickLookSupport/QuickLookSupport-Structs.h>
@class NSURL, NSData, NSFileWrapper;

@interface QLZipArchive : NSObject {

	archiveRef _archive;
	NSURL* _url;
	NSData* _data;
	NSFileWrapper* _fileWrapper;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)fileWrapper;
-(void)enumerateEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)readCurrentDataWithEntry:(archive_entryRef)arg1 error:(id*)arg2 ;
-(BOOL)_reopenWithError:(id*)arg1 ;
-(id)libarchiveError;
@end

