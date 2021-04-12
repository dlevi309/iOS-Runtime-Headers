/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TKSmartCardSlot *)slot;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 PINByteOffset:(long long)arg4 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(void)setAPDU:(NSData *)arg1 ;
-(void)setPINByteOffset:(long long)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(NSData *)APDU;
-(long long)PINByteOffset;
@end

