/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, PKPeerPaymentRecipient;

@interface PKCacheRecipientItem : NSObject <NSSecureCoding> {

	NSDate* _insertDate;
	PKPeerPaymentRecipient* _item;

}

@property (nonatomic,readonly) PKPeerPaymentRecipient * item;              //@synthesize item=_item - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(PKPeerPaymentRecipient *)item;
-(id)initWithItem:(id)arg1 ;
-(BOOL)hasExpired;
-(BOOL)isNewerThan:(id)arg1 ;
@end

