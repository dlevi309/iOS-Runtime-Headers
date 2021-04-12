/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TKSmartCardSlot;

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction <NSSecureCoding> {

	BOOL _result;
	TKSmartCardSlot* _slot;

}

@property (__weak) TKSmartCardSlot * slot;              //@synthesize slot=_slot - In the implementation block
@property (assign) BOOL result;                         //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)result;
-(void)setResult:(BOOL)arg1 ;
-(TKSmartCardSlot *)slot;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
@end

