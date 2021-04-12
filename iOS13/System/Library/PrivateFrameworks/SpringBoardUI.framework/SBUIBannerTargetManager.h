/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/


@class NSHashTable, NSMapTable, NSArray;

@interface SBUIBannerTargetManager : NSObject {

	NSHashTable* _proxies;
	NSMapTable* _implementationToProxyMap;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSArray * targets; 
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSArray *)targets;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(void)_registerTargetImplementation:(id)arg1 ;
-(void)_unregisterTargetImplementation:(id)arg1 ;
-(id)_proxyForTargetImplementation:(id)arg1 ;
@end

