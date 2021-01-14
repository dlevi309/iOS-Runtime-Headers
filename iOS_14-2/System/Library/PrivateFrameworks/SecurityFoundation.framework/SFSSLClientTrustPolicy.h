/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <SecurityFoundation/SFTrustPolicy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFSSLClientTrustPolicy : SFTrustPolicy <NSSecureCoding> {

	id _sslClientTrustPolicyInternal;

}

@property (nonatomic,copy) NSString * clientName; 
+(BOOL)supportsSecureCoding;
-(void)setClientName:(NSString *)arg1 ;
-(NSString *)clientName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithClientName:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

