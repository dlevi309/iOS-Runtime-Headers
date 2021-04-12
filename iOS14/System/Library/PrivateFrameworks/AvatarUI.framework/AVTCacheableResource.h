/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@protocol AVTCacheableResource <NSObject>
@optional
-(id)tokenForObservingChangesWithHandler:(/*^block*/id)arg1;
-(id)persistentIdentifierForScope:(id)arg1;

@required
-(id)volatileIdentifierForScope:(id)arg1;
-(unsigned long long)costForScope:(id)arg1;
-(BOOL)requiresEncryption;

@end

