/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate>)delegate;
-(void)setDelegate:(NSObject*<ACHRemoteTemplateAvailabilityListenerDelegate>)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(ACHTemplateStore *)templateStore;
-(void)daemonReady:(id)arg1 ;
-(void)setTemplateStore:(ACHTemplateStore *)arg1 ;
-(id)initWithProfile:(id)arg1 templateStore:(id)arg2 ;
-(void)_unprotectedNanoUserDefaultsDidSyncWithNotification:(id)arg1 ;
-(void)_updateRemoteTemplateAvailabilityOnPairedDevice;
-(BOOL)_isKeyACHAvailabilityStateKey:(id)arg1 ;
@end

