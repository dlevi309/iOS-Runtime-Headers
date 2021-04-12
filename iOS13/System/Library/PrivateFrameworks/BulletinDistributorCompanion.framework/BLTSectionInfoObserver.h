/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/BBObserverDelegate.h>

@protocol OS_dispatch_queue, BLTSectionInfoObserverDelegate;
@class BBObserver, NSObject, BBSettingsGateway, NSString;

@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate> {

	BBObserver* _observer;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _reloadSectionInfoCompletion;
	BBSettingsGateway* _settingsGateway;
	id<BLTSectionInfoObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionInfoObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<BLTSectionInfoObserverDelegate>)delegate;
-(void)setDelegate:(id<BLTSectionInfoObserverDelegate>)arg1 ;
-(id)sectionInfoForSectionID:(id)arg1 ;
-(void)observer:(id)arg1 noteServerConnectionStateChanged:(BOOL)arg2 ;
-(void)observer:(id)arg1 updateSectionInfo:(id)arg2 ;
-(void)observer:(id)arg1 removeSection:(id)arg2 ;
-(id)initWithSettingsGateway:(id)arg1 ;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)updateSectionInfoBySectionIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_settingsGatewayReconnected:(id)arg1 ;
-(void)_reloadSectionInfosWithCompletion:(/*^block*/id)arg1 ;
-(void)_getUniversalSectionIDs:(id)arg1 sectionIDEnumerator:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

