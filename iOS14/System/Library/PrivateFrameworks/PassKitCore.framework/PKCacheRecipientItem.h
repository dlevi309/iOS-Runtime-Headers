/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(PKPeerPaymentRecipient *)item;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isNewerThan:(id)arg1 ;
-(BOOL)hasExpired;
-(id)initWithItem:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

