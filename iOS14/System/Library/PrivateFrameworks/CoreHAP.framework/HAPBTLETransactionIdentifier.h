/*
* Generated on Thursday, January 14, 2021 at 2:27:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@interface HAPBTLETransactionIdentifier : HMFObject {

	unsigned char _unsignedCharValue;

}

@property (nonatomic,readonly) unsigned char unsignedCharValue;              //@synthesize unsignedCharValue=_unsignedCharValue - In the implementation block
+(unsigned char)generateRequestIdentifier;
+(id)randomTransactionIdentifier;
-(id)shortDescription;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned char)unsignedCharValue;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithUnsignedCharValue:(unsigned char)arg1 ;
@end

