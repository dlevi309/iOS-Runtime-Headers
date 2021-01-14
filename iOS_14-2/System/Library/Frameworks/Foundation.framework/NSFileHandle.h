/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (readonly) unsigned long long offsetInFile; 
@property (copy,readonly) NSData * availableData; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)fileHandleForWritingAtPath:(id)arg1 ;
+(id)fileHandleForUpdatingURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
+(id)fileHandleWithNullDevice;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
+(id)fileHandleForUpdatingAtPath:(id)arg1 ;
+(id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleWithStandardInput;
+(id)fileHandleForWritingToURL:(id)arg1 error:(id*)arg2 ;
+(id)fileHandleWithStandardError;
+(id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3 ;
+(id)fileHandleWithStandardOutput;
+(id)fileHandleForReadingAtPath:(id)arg1 ;
-(void)setReadabilityHandler:(/*^block*/id)arg1 ;
-(BOOL)closeAndReturnError:(out id*)arg1 ;
-(id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(void)closeFile;
-(void)truncateFileAtOffset:(unsigned long long)arg1 ;
-(NSData *)availableData;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(id)readDataToEndOfFile;
-(void)synchronizeFile;
-(void)_closeOnDealloc;
-(void)seekToFileOffset:(unsigned long long)arg1 ;
-(Class)classForCoder;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 ;
-(BOOL)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(void)writeData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2 ;
-(int)fileDescriptor;
-(BOOL)synchronizeAndReturnError:(out id*)arg1 ;
-(BOOL)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2 ;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
-(BOOL)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2 ;
-(id)readDataToEndOfFileAndReturnError:(out id*)arg1 ;
-(unsigned long long)offsetInFile;
-(/*^block*/id)readabilityHandler;
-(id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(BOOL)arg2 ;
-(unsigned long long)seekToEndOfFile;
-(/*^block*/id)writeabilityHandler;
-(id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4 ;
-(void)setWriteabilityHandler:(/*^block*/id)arg1 ;
@end

