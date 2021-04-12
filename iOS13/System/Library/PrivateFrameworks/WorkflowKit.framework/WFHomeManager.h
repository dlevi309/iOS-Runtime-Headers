/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(unsigned long long)status;
-(NSArray *)homes;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)reloadData;
-(BOOL)isLoading;
-(id)primaryHome;
-(void)setLoading:(BOOL)arg1 ;
-(HMHomeManager *)homeManager;
-(void)setHomeManager:(HMHomeManager *)arg1 ;
-(id)homeWithIdentifier:(id)arg1 ;
-(void)ensureHomesAreLoadedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeEventObserver:(id)arg1 ;
-(void)addEventObserver:(id)arg1 ;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(void)_setHomes:(id)arg1 ;
-(NSArray *)homesToWhichWeHaveAdminAccess;
-(NSArray *)homesToWhichWeCanAddHomeAutomations;
-(id)homeNamed:(id)arg1 ;
-(id)sceneNamed:(id)arg1 inHome:(id)arg2 ;
-(id)serviceWithIdentifier:(id)arg1 inHome:(id)arg2 ;
-(BOOL)hasLoadedHomes;
-(NSHashTable *)eventObservers;
-(NSObject*<OS_dispatch_group>)loadHomesGroup;
-(void)setLoadHomesGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

