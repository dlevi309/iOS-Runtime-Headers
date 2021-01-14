/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/


@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject {

	NSData* _encodedKey;
	unsigned char _keyChecksum;
	unsigned char _dataChecksum;
	BOOL _dataChecksumNeedsUpdate;
	NSString* _key;
	NSData* _data;

}
+(id)log;
+(id)dataDeseralizedFrom:(void*)arg1 maxSize:(unsigned long long)arg2 checksum:(char*)arg3 bytesRead:(unsigned long long*)arg4 ;
+(id)errorForInvalidKeyEncoding;
+(unsigned char)byteChecksumOfData:(id)arg1 ;
-(unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void*)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
@end

