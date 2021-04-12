/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResult:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(BOOL)result;
-(id)initWithCoder:(id)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(TKSmartCardSlot *)slot;
@end

