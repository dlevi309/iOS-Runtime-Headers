/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(id)fileWrapper;
-(void)dealloc;
-(void)enumerateEntriesWithHandler:(/*^block*/id)arg1 ;
-(id)readCurrentDataWithEntry:(archive_entryRef)arg1 error:(id*)arg2 ;
-(BOOL)_reopenWithError:(id*)arg1 ;
-(id)libarchiveError;
@end

