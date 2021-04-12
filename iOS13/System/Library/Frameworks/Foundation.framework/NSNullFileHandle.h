/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSFileHandle.h>

@interface NSNullFileHandle : NSFileHandle
-(int)fileDescriptor;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(void)writeData:(id)arg1 ;
-(id)readDataToEndOfFile;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(unsigned long long)offsetInFile;
-(unsigned long long)seekToEndOfFile;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(void)synchronizeFile;
-(void)closeFile;
-(id)availableData;
-(id)readDataToEndOfFileAndReturnError:(out id*)arg1 ;
-(id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(BOOL)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(BOOL)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)synchronizeAndReturnError:(out id*)arg1 ;
-(BOOL)closeAndReturnError:(out id*)arg1 ;
-(/*^block*/id)writeabilityHandler;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)readabilityHandler;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
@end

