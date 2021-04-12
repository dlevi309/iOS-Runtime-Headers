/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	NSString* _containingAppBundleIdentifier;

}

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsIncrementalUpdates;                            //@synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDisplayName;                       //@synthesize localizedDisplayName=_localizedDisplayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * containingAppBundleIdentifier;              //@synthesize containingAppBundleIdentifier=_containingAppBundleIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)credentialProviderExtensionWithDisabledState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(NSString *)localizedDisplayName;
-(NSString *)containingAppBundleIdentifier;
-(id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2 ;
-(id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2 localizedDisplayName:(id)arg3 containingAppBundleIdentifier:(id)arg4 ;
-(BOOL)supportsIncrementalUpdates;
@end

