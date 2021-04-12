/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <libobjc.A.dylib/BLTDebugObserverWatchKitAppList.h>

@protocol BLTWatchKitAppListDelegate;
@class NSDictionary, NSMutableArray, NSString;

@interface BLTWatchKitAppList : NSObject <BLTDebugObserverWatchKitAppList> {

	NSDictionary* _appsByAppBundleID;
	opaque_pthread_mutex_t _lock;
	NSMutableArray* _loadingCompletionHandlers;
	BOOL _loading;
	BOOL _loaded;
	id<BLTWatchKitAppListDelegate> _delegate;

}

@property (getter=isLoaded) BOOL loaded;                                                  //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic,__weak) id<BLTWatchKitAppListDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<BLTWatchKitAppListDelegate>)delegate;
-(void)setDelegate:(id<BLTWatchKitAppListDelegate>)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(BOOL)isLoaded;
-(void)dealloc;
-(void)_fetchWatchKitInfoWithForce:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)watchKitAppDefinitionWithBundleID:(id)arg1 ;
-(void)fetchWatchKitInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchWatchKitInfo;
@end

