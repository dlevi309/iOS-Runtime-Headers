/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id<BLTSiriActionAppListDelegate>)delegate;
-(void)setDelegate:(id<BLTSiriActionAppListDelegate>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationIconDidChange:(id)arg1 ;
-(NSDictionary *)installed;
-(NSSet *)removed;
-(id)_siriActionAppListStoreURL;
-(BOOL)_handleAppListInstalled:(id)arg1 removed:(id)arg2 ;
-(void)updateStoreWithInstalled:(id)arg1 removed:(id)arg2 ;
@end

