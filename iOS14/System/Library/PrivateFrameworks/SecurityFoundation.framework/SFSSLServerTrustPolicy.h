/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/SFTrustPolicy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFSSLServerTrustPolicy : SFTrustPolicy <NSSecureCoding> {

	id _sslServerTrustPolicyInternal;

}

@property (nonatomic,copy) NSString * serverName; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)serverName;
-(void)setServerName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithServerName:(id)arg1 ;
@end

