/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DDSAssetPolicy;

@interface DDSAssertDescriptor : NSObject <NSSecureCoding> {

	NSString* _clientIdentifier;
	NSString* _assertionIdentifier;
	DDSAssetPolicy* _policy;

}

@property (nonatomic,retain) NSString * clientIdentifier;                 //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,retain) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,retain) DDSAssetPolicy * policy;                     //@synthesize policy=_policy - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)assertionIdentifier;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(void)setPolicy:(DDSAssetPolicy *)arg1 ;
-(id)init;
-(DDSAssetPolicy *)policy;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPolicy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(void)setAssertionIdentifier:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEqualToDescriptor:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)clientIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

