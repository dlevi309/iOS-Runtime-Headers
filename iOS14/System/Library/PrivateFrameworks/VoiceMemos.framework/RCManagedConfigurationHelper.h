/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
*/

#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@protocol RCManagedConfigurationHelperDelegate;
@class NSString;

@interface RCManagedConfigurationHelper : NSObject <MCProfileConnectionObserver> {

	BOOL _observing;
	id<RCManagedConfigurationHelperDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<RCManagedConfigurationHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)cloudSyncIsAllowed;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(id<RCManagedConfigurationHelperDelegate>)delegate;
-(void)_notifyDelegateOfChange;
-(void)setDelegate:(id<RCManagedConfigurationHelperDelegate>)arg1 ;
-(void)_stopObserving;
-(void)_startObserving;
-(void)dealloc;
@end

