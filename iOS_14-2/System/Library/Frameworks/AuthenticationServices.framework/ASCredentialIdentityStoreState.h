/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/


@interface ASCredentialIdentityStoreState : NSObject {

	BOOL _enabled;
	BOOL _supportsIncrementalUpdates;

}

@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL supportsIncrementalUpdates;              //@synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates - In the implementation block
-(id)description;
-(BOOL)isEnabled;
-(id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2 ;
-(BOOL)supportsIncrementalUpdates;
@end

