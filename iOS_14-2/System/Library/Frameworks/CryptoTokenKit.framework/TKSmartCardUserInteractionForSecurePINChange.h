/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKSmartCardUserInteractionForPINOperation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TKSmartCardSlot, TKSmartCardPINFormat, NSData;

@interface TKSmartCardUserInteractionForSecurePINChange : TKSmartCardUserInteractionForPINOperation <NSSecureCoding> {

	unsigned long long _PINConfirmation;
	TKSmartCardSlot* _slot;
	TKSmartCardPINFormat* _PINFormat;
	NSData* _APDU;
	long long _currentPINByteOffset;
	long long _newPINByteOffset;

}

@property (__weak) TKSmartCardSlot * slot;                          //@synthesize slot=_slot - In the implementation block
@property (retain) TKSmartCardPINFormat * PINFormat;                //@synthesize PINFormat=_PINFormat - In the implementation block
@property (retain) NSData * APDU;                                   //@synthesize APDU=_APDU - In the implementation block
@property (assign) long long currentPINByteOffset;                  //@synthesize currentPINByteOffset=_currentPINByteOffset - In the implementation block
@property (assign) long long newPINByteOffset;                      //@synthesize newPINByteOffset=_newPINByteOffset - In the implementation block
@property (assign) unsigned long long PINConfirmation;              //@synthesize PINConfirmation=_PINConfirmation - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)APDU;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(void)setSlot:(id)arg1 PINFormat:(id)arg2 APDU:(id)arg3 currentPINByteOffset:(long long)arg4 newPINByteOffset:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(void)setPINFormat:(TKSmartCardPINFormat *)arg1 ;
-(TKSmartCardPINFormat *)PINFormat;
-(unsigned long long)PINConfirmation;
-(void)setAPDU:(NSData *)arg1 ;
-(void)setCurrentPINByteOffset:(long long)arg1 ;
-(void)setNewPINByteOffset:(long long)arg1 ;
-(void)setPINConfirmation:(unsigned long long)arg1 ;
-(long long)currentPINByteOffset;
-(long long)newPINByteOffset;
-(TKSmartCardSlot *)slot;
@end

