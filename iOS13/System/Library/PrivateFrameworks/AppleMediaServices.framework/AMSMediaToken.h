/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSString *)tokenString;
-(double)lifetime;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 valid:(BOOL)arg4 ;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 ;
-(id)invalidCopy;
-(double)percentageOfLifetimeRemaining;
-(BOOL)willExpireWithin:(double)arg1 ;
@end

