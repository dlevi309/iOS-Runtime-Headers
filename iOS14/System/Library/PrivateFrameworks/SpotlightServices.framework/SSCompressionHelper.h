/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@interface SSCompressionHelper : NSObject
+(id)sharedInstance;
-(int)unpackageTarForFd:(int)arg1 size:(unsigned long long)arg2 parentDir:(const char*)arg3 ;
-(char*)getDataOutWithSize:(unsigned long long)arg1 withFlag:(unsigned long long)arg2 fd:(int*)arg3 ;
-(void)uncompressedContentsForCompressedFile:(id)arg1 outPath:(id)arg2 ;
-(int)unTarFileWithFd:(id)arg1 toPath:(id)arg2 ;
@end

