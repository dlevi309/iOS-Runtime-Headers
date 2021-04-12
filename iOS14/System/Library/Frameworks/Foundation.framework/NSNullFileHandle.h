/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(BOOL)closeAndReturnError:(out id*)arg1 ;
-(void)closeFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(id)availableData;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(id)readDataToEndOfFile;
-(void)synchronizeFile;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(BOOL)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(void)writeData:(id)arg1 ;
-(id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2 ;
-(int)fileDescriptor;
-(BOOL)synchronizeAndReturnError:(out id*)arg1 ;
-(BOOL)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(BOOL)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(id)readDataToEndOfFileAndReturnError:(out id*)arg1 ;
-(unsigned long long)offsetInFile;
-(/*^block*/id)readabilityHandler;
-(unsigned long long)seekToEndOfFile;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
@end

