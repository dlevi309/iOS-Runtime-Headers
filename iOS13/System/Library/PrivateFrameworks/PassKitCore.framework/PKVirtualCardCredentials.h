/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKVirtualCardCredentials : NSObject <NSSecureCoding, NSCopying> {

	NSString* _primaryAccountNumber;
	NSString* _cardSecurityCode;
	long long _cardType;

}

@property (nonatomic,copy) NSString * primaryAccountNumber;              //@synthesize primaryAccountNumber=_primaryAccountNumber - In the implementation block
@property (nonatomic,copy) NSString * cardSecurityCode;                  //@synthesize cardSecurityCode=_cardSecurityCode - In the implementation block
@property (assign,nonatomic) long long cardType;                         //@synthesize cardType=_cardType - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)cardType;
-(void)setCardType:(long long)arg1 ;
-(NSString *)cardSecurityCode;
-(NSString *)primaryAccountNumber;
-(void)setCardSecurityCode:(NSString *)arg1 ;
-(void)setPrimaryAccountNumber:(NSString *)arg1 ;
@end

