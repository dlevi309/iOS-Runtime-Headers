/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface TKTokenAccessUserPromptInfo : NSObject <NSSecureCoding> {

	NSString* _clientDisplayName;
	NSString* _providerDisplayName;
	NSUUID* _correlationID;

}

@property (nonatomic,readonly) NSString * clientDisplayName;                //@synthesize clientDisplayName=_clientDisplayName - In the implementation block
@property (nonatomic,readonly) NSString * providerDisplayName;              //@synthesize providerDisplayName=_providerDisplayName - In the implementation block
@property (nonatomic,readonly) NSUUID * correlationID;                      //@synthesize correlationID=_correlationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)clientDisplayName;
-(NSString *)providerDisplayName;
-(NSUUID *)correlationID;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTokenAccessRequest:(id)arg1 ;
@end

