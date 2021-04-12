/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)timeStamp;
-(double)age;
-(NSString *)networkFingerprint;
-(id)initWithSiteCode:(id)arg1 forNetworkFingerprint:(id)arg2 ;
@end

