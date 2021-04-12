/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABOle : NSObject
+(id)stringForCLSID:(SsrwOO_GUID)arg1 ;
+(BOOL)isBiffCLSID:(id)arg1 ;
+(id)readCLSIDFromStream:(SsrwOOStream*)arg1 ;
+(id)readAnsiStringFromStream:(SsrwOOStream*)arg1 ;
+(id)read4ByteFromStream:(SsrwOOStream*)arg1 ;
+(id)readUnicodeStringFromStream:(SsrwOOStream*)arg1 ;
+(BOOL)readSharedInfoFor:(id)arg1 fromStorage:(SsrwOOStorage*)arg2 ;
+(id)readFromData:(id)arg1 cancel:(id)arg2 ;
+(BOOL)isChart:(id)arg1 ;
+(id)readFromFileName:(id)arg1 cancel:(id)arg2 ;
+(id)readFromParentStorage:(SsrwOOStorage*)arg1 storageName:(id)arg2 cancel:(id)arg3 ;
+(id)readCompressedFromStream:(SsrwOOStream*)arg1 compressedSize:(unsigned)arg2 uncompressedSize:(unsigned)arg3 cancel:(id)arg4 ;
+(id)readFromStream:(SsrwOOStream*)arg1 size:(unsigned)arg2 cancel:(id)arg3 ;
@end

