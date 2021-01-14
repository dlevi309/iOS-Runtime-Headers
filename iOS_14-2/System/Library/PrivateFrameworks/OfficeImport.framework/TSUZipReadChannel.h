/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/TSUReadChannel.h>

@protocol TSUReadChannel;
@class TSUZipEntry, TSUZipArchive, NSString;

@interface TSUZipReadChannel : NSObject <TSUReadChannel> {

	TSUZipEntry* _entry;
	TSUZipArchive* _archive;
	BOOL _validateCRC;
	id<TSUReadChannel> _archiveReadChannel;

}

@property (nonatomic,readonly) BOOL isValid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(BOOL)isValid;
-(void)dealloc;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)addBarrier:(/*^block*/id)arg1 ;
-(void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setLowWater:(unsigned long long)arg1 ;
-(id)initWithEntry:(id)arg1 archive:(id)arg2 validateCRC:(BOOL)arg3 ;
-(void)handleFailureWithHandler:(/*^block*/id)arg1 error:(id)arg2 ;
-(void)readWithFileHeaderLength:(unsigned long long)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)readFileHeaderFromData:(id)arg1 headerLength:(unsigned long long*)arg2 ;
-(BOOL)processData:(id)arg1 CRC:(unsigned*)arg2 isDone:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
@end

