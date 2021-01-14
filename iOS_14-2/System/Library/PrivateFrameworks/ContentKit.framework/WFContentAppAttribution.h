/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentAttribution.h>

@class NSString;

@interface WFContentAppAttribution : WFContentAttribution {

	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
-(id)app;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)localizedDescription;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(id)attributionIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2 managedLevel:(unsigned long long)arg3 ;
@end

