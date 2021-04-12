/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DDSAssetPolicy *)policy;
-(void)setPolicy:(DDSAssetPolicy *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(NSString *)assertionIdentifier;
-(void)setAssertionIdentifier:(NSString *)arg1 ;
-(id)initWithPolicy:(id)arg1 assertionID:(id)arg2 clientID:(id)arg3 ;
-(BOOL)isEqualToDescriptor:(id)arg1 ;
@end

