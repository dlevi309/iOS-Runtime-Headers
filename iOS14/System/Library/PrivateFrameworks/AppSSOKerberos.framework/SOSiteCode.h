/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface SOSiteCode : NSObject <NSSecureCoding> {

	NSString* _code;
	NSDate* _timeStamp;
	NSString* _networkFingerprint;

}

@property (nonatomic,readonly) NSString * code;                            //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) NSDate * timeStamp;                         //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,readonly) NSString * networkFingerprint;              //@synthesize networkFingerprint=_networkFingerprint - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timeStamp;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)code;
-(double)age;
-(NSString *)networkFingerprint;
-(id)initWithSiteCode:(id)arg1 forNetworkFingerprint:(id)arg2 ;
@end

