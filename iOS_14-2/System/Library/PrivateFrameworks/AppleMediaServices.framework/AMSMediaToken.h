/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface AMSMediaToken : NSObject <NSSecureCoding> {

	BOOL _valid;
	NSDate* _expirationDate;
	double _lifetime;
	NSString* _tokenString;

}

@property (nonatomic,readonly) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double lifetime;                        //@synthesize lifetime=_lifetime - In the implementation block
@property (nonatomic,readonly) NSString * tokenString;                 //@synthesize tokenString=_tokenString - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 ;
-(double)lifetime;
-(NSString *)tokenString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 valid:(BOOL)arg4 ;
-(id)invalidCopy;
-(id)description;
-(BOOL)willExpireWithin:(double)arg1 ;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(id)initWithCoder:(id)arg1 ;
-(double)percentageOfLifetimeRemaining;
-(BOOL)isEqual:(id)arg1 ;
@end

