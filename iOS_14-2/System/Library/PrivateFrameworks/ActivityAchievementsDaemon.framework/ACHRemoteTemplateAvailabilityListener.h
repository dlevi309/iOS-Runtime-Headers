/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
*/

#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol ACHRemoteTemplateAvailabilityListenerDelegate;
@class NSObject, HDProfile, ACHTemplateStore, NSString;

@interface ACHRemoteTemplateAvailabilityListener : NSObject <HDHealthDaemonReadyObserver> {

	NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate> _delegate;
	HDProfile* _profile;
	ACHTemplateStore* _templateStore;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                                                            //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic,__weak) ACHTemplateStore * templateStore;                                               //@synthesize templateStore=_templateStore - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)daemonReady:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate>)delegate;
-(ACHTemplateStore *)templateStore;
-(void)setDelegate:(NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate>)arg1 ;
-(HDProfile *)profile;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(id)initWithProfile:(id)arg1 templateStore:(id)arg2 ;
-(void)_unprotectedNanoUserDefaultsDidSyncWithNotification:(id)arg1 ;
-(void)_updateRemoteTemplateAvailabilityOnPairedDevice;
-(BOOL)_isKeyACHAvailabilityStateKey:(id)arg1 ;
@end

