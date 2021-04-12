/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue, BLTSiriActionAppListDelegate;
@class NSMutableDictionary, NSMutableSet, NSObject, NSURL, NSDictionary, NSSet, NSString;

@interface BLTSiriActionAppList : NSObject <LSApplicationWorkspaceObserverProtocol> {

	NSMutableDictionary* _installed;
	NSMutableSet* _removed;
	NSObject*<OS_dispatch_queue> _appListQueue;
	NSURL* _siriActionAppListStoreURL;
	NSMutableSet* _appListStore;
	id<BLTSiriActionAppListDelegate> _delegate;

}

@property (nonatomic,readonly) NSDictionary * installed; 
@property (nonatomic,readonly) NSSet * removed; 
@property (assign,nonatomic,__weak) id<BLTSiriActionAppListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BLTSiriActionAppListDelegate>)delegate;
-(NSSet *)removed;
-(NSDictionary *)installed;
-(void)setDelegate:(id<BLTSiriActionAppListDelegate>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationIconDidChange:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
-(id)_siriActionAppListStoreURL;
-(BOOL)_handleAppListInstalled:(id)arg1 removed:(id)arg2 ;
-(void)updateStoreWithInstalled:(id)arg1 removed:(id)arg2 ;
@end

