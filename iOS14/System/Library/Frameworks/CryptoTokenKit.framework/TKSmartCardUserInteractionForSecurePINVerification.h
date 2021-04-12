/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TKSmartCardSlot, TKSmartCardPINFormat, NSData;

@interface TKSmartCardUserInteractionForSecurePINVerification : TKSmartCardUserInteractionForPINOperation <NSSecureCoding> {

	TKSmartCardSlot* _slot;
	TKSmartCardPINFormat* _PINFormat;
	NSData* _APDU;
	long long _PINByteOffset;

}

@property (__weak) TKSmartCardSlot * slot;                        //@synthesize slot=_slot - In the implementation block
@property (retain) TKSmartCardPINFormat * PINFormat;              //@synthesize PINFormat=_PINFormat - In the implementation block
@property (retain) NSData * APDU;                                 //@synthesize APDU=_APDU - In the implementation block
@property (assign) long long PINByteOffset;                       //@synthesize PINByteOffset=_PINByteOffset - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)APDU;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 PINByteOffset:(long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(void)setPINByteOffset:(long long)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(long long)PINByteOffset;
-(void)setAPDU:(NSData *)arg1 ;
-(TKSmartCardSlot *)slot;
@end

