/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/


#import <IDSFoundation/IDSFoundation-Structs.h>
@interface IDSSessionInfoMetadataSerializer : NSObject
+(id)serializeSessionInfoMetadata:(id)arg1 ;
+(void)_writeStringToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID24*)arg2 ;
+(void)_writeNumberToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID24*)arg2 ;
+(void)_writeDictionaryToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID24*)arg2 ;
+(void)_writeArrayToByteBuffer:(id)arg1 buffer:(SCD_Struct_ID24*)arg2 ;
+(id)_readArrayFromByteArray:(char*)arg1 byteBuffer:(SCD_Struct_ID24*)arg2 ;
+(id)_readDictionaryFromByteArray:(char*)arg1 byteBuffer:(SCD_Struct_ID24*)arg2 ;
+(id)deserializeSessionInfoMetadata:(id)arg1 ;
@end

