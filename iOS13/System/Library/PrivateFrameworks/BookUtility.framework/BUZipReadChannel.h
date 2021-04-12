/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/

#import <libobjc.A.dylib/BUReadChannel.h>

@protocol BUReadChannel;
@class BUZipEntry, BUZipArchive, NSString;

@interface BUZipReadChannel : NSObject <BUReadChannel> {

	BOOL _validateCRC;
	BUZipEntry* _entry;
	BUZipArchive* _archive;
	id<BUReadChannel> _archiveReadChannel;

}

@property (nonatomic,retain) BUZipEntry * entry;                                //@synthesize entry=_entry - In the implementation block
@property (nonatomic,retain) BUZipArchive * archive;                            //@synthesize archive=_archive - In the implementation block
@property (assign,nonatomic) BOOL validateCRC;                                  //@synthesize validateCRC=_validateCRC - In the implementation block
@property (nonatomic,retain) id<BUReadChannel> archiveReadChannel;              //@synthesize archiveReadChannel=_archiveReadChannel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
-(void)dealloc;
-(BOOL)isValid;
-(void)close;
-(BUZipEntry *)entry;
-(void)setEntry:(BUZipEntry *)arg1 ;
-(BUZipArchive *)archive;
-(void)setArchive:(BUZipArchive *)arg1 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(BOOL)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(BOOL)arg3 ;
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)processData:(id)arg1 CRC:(unsigned*)arg2 isDone:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(id<BUReadChannel>)archiveReadChannel;
-(BOOL)validateCRC;
-(void)setValidateCRC:(BOOL)arg1 ;
-(void)setArchiveReadChannel:(id<BUReadChannel>)arg1 ;
@end

