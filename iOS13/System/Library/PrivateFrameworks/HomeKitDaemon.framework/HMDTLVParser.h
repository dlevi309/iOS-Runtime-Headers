/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMDTLVParser : HMFObject {

	NSData* _tlvData;

}
+(id)parserWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)parseResponseForData:(unsigned long long)arg1 ;
-(id)parseResponseForNumber:(unsigned long long)arg1 ;
-(id)parseResponseForUInt8:(unsigned long long)arg1 ;
-(id)parseResponseForUInt16:(unsigned long long)arg1 ;
-(id)parseResponseForString:(unsigned long long)arg1 ;
-(id)parseResponseForUUID:(unsigned long long)arg1 ;
-(id)parseResponseForArray:(unsigned long long)arg1 ;
@end

