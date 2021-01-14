/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSUUID;

@interface ICDelegationProviderServiceAssertion : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _expirationDate;
	NSString* _name;
	NSUUID* _uniqueIdentifier;

}

@property (nonatomic,copy) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)description;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

