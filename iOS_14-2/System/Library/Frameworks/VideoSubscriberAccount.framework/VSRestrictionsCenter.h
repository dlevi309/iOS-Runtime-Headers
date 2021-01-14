/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class MCProfileConnection, NSString;

@interface VSRestrictionsCenter : NSObject <MCProfileConnectionObserver> {

	BOOL _accountModificationAllowed;
	MCProfileConnection* _profileConnection;

}

@property (assign,getter=isAcountModificationAllowed,nonatomic) BOOL accountModificationAllowed;              //@synthesize accountModificationAllowed=_accountModificationAllowed - In the implementation block
@property (nonatomic,retain) MCProfileConnection * profileConnection;                                         //@synthesize profileConnection=_profileConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultRestrictionsCenter;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id)init;
-(void)setProfileConnection:(MCProfileConnection *)arg1 ;
-(MCProfileConnection *)profileConnection;
-(void)dealloc;
-(void)_updateAccountModificationAllowed;
-(void)setAccountModificationAllowed:(BOOL)arg1 ;
-(BOOL)_canInstallAppsAtAll;
-(BOOL)canInstallAppWithRating:(long long)arg1 ;
-(BOOL)isAcountModificationAllowed;
@end

