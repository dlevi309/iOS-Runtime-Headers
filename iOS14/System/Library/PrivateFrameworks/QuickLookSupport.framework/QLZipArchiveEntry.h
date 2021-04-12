/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(QLZipArchive *)archive;
-(archive_entryRef)entry;
-(NSURL *)url;
-(void)setData:(NSData *)arg1 ;
-(void)setArchive:(QLZipArchive *)arg1 ;
-(void)setEntry:(archive_entryRef)arg1 ;
-(NSData *)data;
-(id)readDataWithError:(id*)arg1 ;
@end

