/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/BLTSectionInfoObserverDelegate.h>
#import <libobjc.A.dylib/BLTSectionInfoListBBProvider.h>

@protocol BLTSectionInfoListBBProvider <BLTSectionInfoListProvider>
@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate; 
@required
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setDelegate:(id)arg1;
-(id)sectionInfoForSectionID:(id)arg1;
-(void)reloadWithCompletion:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue, BLTSectionInfoListProviderDelegate;
@class BLTSectionInfoObserver, LSApplicationWorkspace, NSObject, NSString;

@interface BLTSectionInfoListBBProvider : NSObject <LSApplicationWorkspaceObserverProtocol, BLTSectionInfoObserverDelegate, BLTSectionInfoListBBProvider> {

	BLTSectionInfoObserver* _observer;
	LSApplicationWorkspace* _appWorkspace;
	NSObject*<OS_dispatch_queue> _queue;
	id<BLTSectionInfoListProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSectionInfoListProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithSettingsGateway:(id)arg1 ;
-(id<BLTSectionInfoListProviderDelegate>)delegate;
-(void)reloadSection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<BLTSectionInfoListProviderDelegate>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(id)sectionInfoForSectionID:(id)arg1 ;
-(void)applicationIconDidChange:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(void)reloadWithCompletion:(/*^block*/id)arg1 ;
-(void)sectionInfoObserver:(id)arg1 updatedSectionInfoForSectionIDs:(id)arg2 transaction:(id)arg3 ;
-(void)sectionInfoObserver:(id)arg1 removedSectionWithSectionID:(id)arg2 transaction:(id)arg3 ;
@end

