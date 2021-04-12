/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSString, LSApplicationProxy;

@interface WFDataInfo : NSObject <NSSecureCoding, WFSerializableContent> {

	NSString* _bundleIdentifier;
	NSString* _accountIdentifier;
	unsigned long long _disclosureLevel;
	unsigned long long _managedLevel;

}

@property (nonatomic,readonly) LSApplicationProxy * app; 
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountIdentifier;               //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long disclosureLevel;              //@synthesize disclosureLevel=_disclosureLevel - In the implementation block
@property (nonatomic,readonly) unsigned long long managedLevel;                 //@synthesize managedLevel=_managedLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)dataInfoWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2 ;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)dataInfoWithAccountBasedBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 ;
+(id)dataInfoWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4 ;
+(id)dataInfoWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2 ;
+(id)shortcutsAppDataInfo;
+(id)shortcutsAppDataInfoWithDisclosureLevel:(unsigned long long)arg1 ;
-(LSApplicationProxy *)app;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)accountIdentifier;
-(id)wfSerializedRepresentation;
-(unsigned long long)managedLevel;
-(id)initWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4 ;
-(unsigned long long)disclosureLevel;
@end

