/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <HMFoundation/HMFObject.h>

@interface HAPBTLETransactionIdentifier : HMFObject {

	unsigned char _unsignedCharValue;

}

@property (nonatomic,readonly) unsigned char unsignedCharValue;              //@synthesize unsignedCharValue=_unsignedCharValue - In the implementation block
+(unsigned char)generateRequestIdentifier;
+(id)randomTransactionIdentifier;
-(unsigned char)unsignedCharValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithUnsignedCharValue:(unsigned char)arg1 ;
@end

