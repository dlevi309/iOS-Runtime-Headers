/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class RMConfiguration, NSString;

@interface RMPolicy : NSObject <NSSecureCoding> {

	RMConfiguration* _configuration;

}

@property (nonatomic,retain) RMConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSString * policyKey; 
+(BOOL)supportsSecureCoding;
+(id)policyKeyForConfiguration:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(RMConfiguration *)configuration;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setConfiguration:(RMConfiguration *)arg1 ;
-(BOOL)isEqualToPolicy:(id)arg1 ;
-(NSString *)policyKey;
@end

