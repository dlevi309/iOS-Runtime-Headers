/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
*/

#import <WiFiVelocity/WiFiVelocity-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate;

@interface W5WiFiPreferredNetwork : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isEnabled;
	BOOL _isPasspoint;
	BOOL _isCaptive;
	BOOL _isHidden;
	BOOL _isMultiAP;
	NSString* _identifier;
	NSString* _ssidString;
	NSData* _ssid;
	long long _security;
	NSString* _domainName;
	NSDate* _lastJoinedTimestamp;

}

@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * ssidString;                     //@synthesize ssidString=_ssidString - In the implementation block
@property (nonatomic,copy) NSData * ssid;                             //@synthesize ssid=_ssid - In the implementation block
@property (assign,nonatomic) long long security;                      //@synthesize security=_security - In the implementation block
@property (assign,nonatomic) BOOL isEnabled;                          //@synthesize isEnabled=_isEnabled - In the implementation block
@property (assign,nonatomic) BOOL isPasspoint;                        //@synthesize isPasspoint=_isPasspoint - In the implementation block
@property (nonatomic,copy) NSString * domainName;                     //@synthesize domainName=_domainName - In the implementation block
@property (assign,nonatomic) BOOL isCaptive;                          //@synthesize isCaptive=_isCaptive - In the implementation block
@property (assign,nonatomic) BOOL isHidden;                           //@synthesize isHidden=_isHidden - In the implementation block
@property (assign,nonatomic) BOOL isMultiAP;                          //@synthesize isMultiAP=_isMultiAP - In the implementation block
@property (nonatomic,copy) NSDate * lastJoinedTimestamp;              //@synthesize lastJoinedTimestamp=_lastJoinedTimestamp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isCaptive;
-(NSString *)domainName;
-(BOOL)isMultiAP;
-(long long)security;
-(void)setIsEnabled:(BOOL)arg1 ;
-(void)setIsPasspoint:(BOOL)arg1 ;
-(BOOL)isPasspoint;
-(void)setSsid:(NSData *)arg1 ;
-(BOOL)isHidden;
-(void)setDomainName:(NSString *)arg1 ;
-(void)setSsidString:(NSString *)arg1 ;
-(NSString *)ssidString;
-(BOOL)isEqualToPreferredNetwork:(id)arg1 ;
-(NSDate *)lastJoinedTimestamp;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)ssid;
-(void)setIsMultiAP:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEnabled;
-(NSString *)identifier;
-(void)setLastJoinedTimestamp:(NSDate *)arg1 ;
-(void)setIsHidden:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSecurity:(long long)arg1 ;
-(void)setIsCaptive:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

