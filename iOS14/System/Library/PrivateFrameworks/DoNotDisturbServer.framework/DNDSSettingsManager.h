/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <libobjc.A.dylib/DNDSSyncSettingsProviderDelegate.h>
#import <libobjc.A.dylib/DNDSSysdiagnoseDataProvider.h>

@protocol OS_dispatch_queue, DNDSBackingStore, DNDSSettingsManagerDelegate;
@class NSObject, CNContactStore, DNDSSyncSettingsProvider, NSString;

@interface DNDSSettingsManager : NSObject <DNDSSyncSettingsProviderDelegate, DNDSSysdiagnoseDataProvider> {

	NSObject*<OS_dispatch_queue> _queue;
	id<DNDSBackingStore> _backingStore;
	CNContactStore* _contactStore;
	DNDSSyncSettingsProvider* _syncSettingsProvider;
	id<DNDSSettingsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DNDSSettingsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * sysdiagnoseDataIdentifier; 
-(id<DNDSSettingsManagerDelegate>)delegate;
-(NSString *)sysdiagnoseDataIdentifier;
-(id)sysdiagnoseDataForDate:(id)arg1 ;
-(void)setDelegate:(id<DNDSSettingsManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)_readSettingsReturningError:(id*)arg1 ;
-(unsigned long long)_saveBehaviorSettings:(id)arg1 phoneCallBypassSettings:(id)arg2 scheduleSettings:(id)arg3 error:(id*)arg4 ;
-(id)behaviorSettingsWithError:(id*)arg1 ;
-(id)phoneCallBypassSettingsWithError:(id*)arg1 ;
-(id)scheduleSettingsWithError:(id*)arg1 ;
-(id)syncSettingsWithError:(id*)arg1 ;
-(void)syncSettingsProvider:(id)arg1 didReceiveUpdatedSyncSettings:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 contactStore:(id)arg2 ;
-(BOOL)setBehaviorSettings:(id)arg1 withError:(id*)arg2 ;
-(BOOL)setPhoneCallBypassSettings:(id)arg1 withError:(id*)arg2 ;
-(BOOL)setScheduleSettings:(id)arg1 withError:(id*)arg2 ;
@end

