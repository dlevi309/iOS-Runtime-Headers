/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentAttribution.h>

@class NSString;

@interface WFContentAccountAttribution : WFContentAttribution {

	NSString* _bundleIdentifier;
	NSString* _accountIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(id)app;
-(NSString *)accountIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)localizedDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(id)attributionIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4 ;
@end

