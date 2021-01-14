/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@interface IDSSessionInfoMetadataSerializer : NSObject
+(id)serializeSessionInfoMetadata:(id)arg1 ;
+(void)_writeStringToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(void)_writeNumberToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(void)_writeDictionaryToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(void)_writeArrayToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID25*)arg2 ;
+(id)_readArrayFromByteArray:(char*)arg1 byteBuffer:(SCD_Struct_ID25*)arg2 ;
+(id)_readDictionaryFromByteArray:(char*)arg1 byteBuffer:(SCD_Struct_ID25*)arg2 ;
+(id)deserializeSessionInfoMetadata:(id)arg1 ;
@end

