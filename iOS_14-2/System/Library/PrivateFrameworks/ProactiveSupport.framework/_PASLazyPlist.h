/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


#import <ProactiveSupport/ProactiveSupport-Structs.h>
@interface _PASLazyPlist : NSObject
+(void)setSerializationStatsHandler:(/*^block*/id)arg1 ;
+(void)setDeserializationStatsHandler:(/*^block*/id)arg1 ;
+(id)dataWithPropertyList:(id)arg1 format:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)propertyListWithPath:(id)arg1 fileRange:(NSRange)arg2 error:(id*)arg3 ;
+(/*^block*/id)serializationStatsHandler;
+(id)arrayWithPath:(id)arg1 error:(id*)arg2 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 error:(id*)arg3 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 format:(unsigned long long)arg3 startOfs:(long long*)arg4 error:(id*)arg5 ;
+(id)dictionaryWithData:(id)arg1 error:(id*)arg2 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 appendedToFd:(int)arg2 startOfs:(long long*)arg3 error:(id*)arg4 ;
+(/*^block*/id)deserializationStatsHandler;
+(id)dictionaryWithPath:(id)arg1 error:(id*)arg2 ;
+(id)propertyListWithPath:(id)arg1 error:(id*)arg2 ;
+(id)arrayWithData:(id)arg1 error:(id*)arg2 ;
+(BOOL)isLazyPlistLikelyContainedInFileAtPath:(id)arg1 format:(unsigned long long*)arg2 ;
+(id)dataWithPropertyList:(id)arg1 error:(id*)arg2 ;
+(id)fileBackedDataWithPropertyList:(id)arg1 writtenToPath:(id)arg2 format:(unsigned long long)arg3 error:(id*)arg4 ;
+(BOOL)isLazyPlistLikelyContainedInData:(id)arg1 format:(unsigned long long*)arg2 ;
+(id)propertyListWithData:(id)arg1 error:(id*)arg2 ;
-(id)init;
@end

