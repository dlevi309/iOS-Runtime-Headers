/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setConfiguration:(RMConfiguration *)arg1 ;
-(RMConfiguration *)configuration;
-(NSString *)policyKey;
-(BOOL)isEqualToPolicy:(id)arg1 ;
@end

