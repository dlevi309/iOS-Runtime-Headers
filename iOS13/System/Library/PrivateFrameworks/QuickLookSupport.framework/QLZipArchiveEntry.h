/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
*/


#import <QuickLookSupport/QuickLookSupport-Structs.h>
@class QLZipArchive, NSData, NSError, NSURL;

@interface QLZipArchiveEntry : NSObject {

	archive_entryRef _entry;
	QLZipArchive* _archive;
	NSData* _data;
	NSError* _error;

}

@property (assign) archive_entryRef entry;               //@synthesize entry=_entry - In the implementation block
@property (__weak) QLZipArchive * archive;               //@synthesize archive=_archive - In the implementation block
@property (retain) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)url;
-(archive_entryRef)entry;
-(void)setEntry:(archive_entryRef)arg1 ;
-(QLZipArchive *)archive;
-(void)setArchive:(QLZipArchive *)arg1 ;
-(id)readDataWithError:(id*)arg1 ;
@end

