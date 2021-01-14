/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPTLVDescription.h>

@interface HAPNumberParser : HAPTLVDescription {

	unsigned long long _decodedNumber;

}

@property (nonatomic,readonly) unsigned long long decodedNumber;              //@synthesize decodedNumber=_decodedNumber - In the implementation block
-(id)initWithTLVData:(id)arg1 ;
-(unsigned long long)decodedNumber;
@end

