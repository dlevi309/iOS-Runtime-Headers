/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HAPTLVParser : HMFObject {

	NSData* _tlvData;

}
+(id)parserWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)parseResponseForNumber:(unsigned long long)arg1 ;
-(id)parseResponseForUInt8:(unsigned long long)arg1 ;
-(id)parseResponseForUInt16:(unsigned long long)arg1 ;
-(id)parseResponseForString:(unsigned long long)arg1 ;
-(id)parseResponseForData:(unsigned long long)arg1 ;
-(id)parseResponseForArray:(unsigned long long)arg1 ;
-(id)parseResponseForUUID:(unsigned long long)arg1 ;
@end

