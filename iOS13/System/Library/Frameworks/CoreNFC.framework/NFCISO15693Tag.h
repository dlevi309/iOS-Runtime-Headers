/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
*/

#import <CoreNFC/CoreNFC-Structs.h>
#import <CoreNFC/NFCTag.h>
#import <libobjc.A.dylib/NFCISO15693Tag.h>

@class NSString, NSData;

@interface NFCISO15693Tag : NFCTag <NFCISO15693Tag>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,__weak,readonly) id<NFCReaderSession> session; 
@property (getter=isAvailable,nonatomic,readonly) BOOL available; 
@property (nonatomic,copy,readonly) NSData * identifier; 
@property (nonatomic,readonly) unsigned long long icManufacturerCode; 
@property (nonatomic,copy,readonly) NSData * icSerialNumber; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)identifier;
-(id)_parseResponseErrorWithData:(id)arg1 ;
-(void)sendCustomCommandWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)readMultipleBlocksWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stayQuietWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)readSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)writeSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 dataBlock:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)lockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(unsigned char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)readMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)writeMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(NSRange)arg2 dataBlocks:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)selectWithRequestFlags:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetToReadyWithRequestFlags:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeAFIWithRequestFlag:(unsigned char)arg1 afi:(unsigned char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lockAFIWithRequestFlag:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeDSFIDWithRequestFlag:(unsigned char)arg1 dsfid:(unsigned char)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lockDFSIDWithRequestFlag:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getSystemInfoWithRequestFlag:(unsigned char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getMultipleBlockSecurityStatusWithRequestFlag:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)customCommandWithRequestFlag:(unsigned char)arg1 customCommandCode:(long long)arg2 customRequestParameters:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)extendedReadSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)extendedWriteSingleBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 dataBlock:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)extendedLockBlockWithRequestFlags:(unsigned char)arg1 blockNumber:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)extendedReadMultipleBlocksWithRequestFlags:(unsigned char)arg1 blockRange:(NSRange)arg2 completionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)icManufacturerCode;
-(NSData *)icSerialNumber;
-(id)_generateRequestHeader:(unsigned char)arg1 flags:(unsigned char)arg2 ;
@end

