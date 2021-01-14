/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, TKSmartCardSlot;

@interface TKSmartCardUserInteractionForStringEntry : TKSmartCardUserInteraction <NSSecureCoding> {

	NSString* _result;
	TKSmartCardSlot* _slot;

}

@property (__weak) TKSmartCardSlot * slot;              //@synthesize slot=_slot - In the implementation block
@property (retain) NSString * result;                   //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setResult:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSlot:(TKSmartCardSlot *)arg1 ;
-(NSString *)result;
-(id)initWithCoder:(id)arg1 ;
-(void)runWithReply:(/*^block*/id)arg1 ;
-(TKSmartCardSlot *)slot;
@end

