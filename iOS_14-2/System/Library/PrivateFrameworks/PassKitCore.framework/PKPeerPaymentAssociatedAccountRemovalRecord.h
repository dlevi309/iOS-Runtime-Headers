/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface PKPeerPaymentAssociatedAccountRemovalRecord : NSObject <NSSecureCoding> {

	BOOL _hasPresentedNotification;
	NSString* _altDSID;
	long long _reason;
	NSDate* _date;

}

@property (nonatomic,copy) NSString * altDSID;                           //@synthesize altDSID=_altDSID - In the implementation block
@property (assign,nonatomic) long long reason;                           //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSDate * date;                                //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasPresentedNotification;              //@synthesize hasPresentedNotification=_hasPresentedNotification - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(BOOL)hasPresentedNotification;
-(void)setHasPresentedNotification:(BOOL)arg1 ;
-(void)setAltDSID:(NSString *)arg1 ;
-(long long)reason;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)date;
-(void)setReason:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

