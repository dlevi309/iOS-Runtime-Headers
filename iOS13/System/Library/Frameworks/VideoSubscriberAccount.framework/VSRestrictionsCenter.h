/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(MCProfileConnection *)profileConnection;
-(void)setProfileConnection:(MCProfileConnection *)arg1 ;
-(void)_updateAccountModificationAllowed;
-(void)setAccountModificationAllowed:(BOOL)arg1 ;
-(BOOL)_canInstallAppsAtAll;
-(BOOL)canInstallAppWithRating:(long long)arg1 ;
-(BOOL)isAcountModificationAllowed;
@end

