/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/HMHomeManagerDelegate.h>
#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@protocol OS_dispatch_group;
@class NSArray, NSHashTable, HMHomeManager, NSObject, NSString;

@interface WFHomeManager : NSObject <HMHomeManagerDelegate, WFApplicationStateObserver> {

	BOOL _hasLoadedHomes;
	BOOL _loading;
	NSArray* _homes;
	NSHashTable* _eventObservers;
	HMHomeManager* _homeManager;
	NSObject*<OS_dispatch_group> _loadHomesGroup;

}

@property (nonatomic,readonly) NSHashTable * eventObservers;                               //@synthesize eventObservers=_eventObservers - In the implementation block
@property (nonatomic,retain) HMHomeManager * homeManager;                                  //@synthesize homeManager=_homeManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> loadHomesGroup;                  //@synthesize loadHomesGroup=_loadHomesGroup - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) BOOL hasLoadedHomes;                                        //@synthesize hasLoadedHomes=_hasLoadedHomes - In the implementation block
@property (nonatomic,readonly) unsigned long long status; 
@property (nonatomic,readonly) NSArray * homes;                                            //@synthesize homes=_homes - In the implementation block
@property (nonatomic,readonly) NSArray * homesToWhichWeHaveAdminAccess; 
@property (nonatomic,readonly) NSArray * homesToWhichWeCanAddHomeAutomations; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(id)cachedHomeSceneNames;
-(void)setLoading:(BOOL)arg1 ;
-(id)init;
-(BOOL)isLoading;
-(void)reloadData;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(BOOL)hasLoadedHomes;
-(HMHomeManager *)homeManager;
-(id)primaryHome;
-(NSArray *)homes;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(unsigned long long)status;
-(void)dealloc;
-(NSArray *)homesToWhichWeCanAddHomeAutomations;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)_setHomes:(id)arg1 ;
-(void)ensureHomesAreLoadedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)addEventObserver:(id)arg1 ;
-(void)removeEventObserver:(id)arg1 ;
-(NSArray *)homesToWhichWeHaveAdminAccess;
-(id)homeNamed:(id)arg1 ;
-(id)homeWithIdentifier:(id)arg1 ;
-(id)sceneNamed:(id)arg1 inHome:(id)arg2 ;
-(id)serviceWithIdentifier:(id)arg1 inHome:(id)arg2 ;
-(void)cacheHomeSceneNames;
-(NSHashTable *)eventObservers;
-(NSObject*<OS_dispatch_group>)loadHomesGroup;
-(void)setLoadHomesGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

