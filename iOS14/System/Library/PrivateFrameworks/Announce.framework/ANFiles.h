/*
* Generated on Thursday, January 14, 2021 at 2:29:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Announce.framework/Announce
*/


@interface ANFiles : NSObject
+(void)removeItem:(id)arg1 ;
+(id)shared;
+(id)createTemporaryFileWithData:(id)arg1 extension:(unsigned long long)arg2 directory:(id)arg3 ;
+(void)purgeTemporarySubDirectory:(id)arg1 ;
+(id)createTemporaryURLWithExtension:(unsigned long long)arg1 directory:(id)arg2 ;
+(id)temporaryDirectoryUrl;
+(id)stringForFileExtension:(unsigned long long)arg1 ;
-(void)removeItem:(id)arg1 ;
-(id)createTemporaryFileWithData:(id)arg1 extension:(unsigned long long)arg2 directory:(id)arg3 ;
-(void)purgeTemporarySubDirectory:(id)arg1 ;
-(id)createTemporaryURLWithExtension:(unsigned long long)arg1 directory:(id)arg2 ;
-(id)createDirectory:(id)arg1 andFileURLWithExtension:(unsigned long long)arg2 ;
-(void)removeDirectoryIfEmpty:(id)arg1 ;
@end

