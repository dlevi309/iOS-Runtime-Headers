/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/

#import <SafariFoundation/SafariFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _enabled;
	BOOL _supportsIncrementalUpdates;
	NSString* _localizedDisplayName;
	id _credentialIdentityStoreIdentifier;

}

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsIncrementalUpdates;                        //@synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName;                   //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) id credentialIdentityStoreIdentifier;              //@synthesize credentialIdentityStoreIdentifier=_credentialIdentityStoreIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)credentialProviderExtensionWithDisabledState;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)localizedDisplayName;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2 ;
-(id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2 localizedDisplayName:(id)arg3 credentialIdentityStoreIdentifier:(id)arg4 ;
-(BOOL)supportsIncrementalUpdates;
-(id)credentialIdentityStoreIdentifier;
@end

