/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_dispatch_queue, NSObject;
#import <FileProvider/FileProvider-Structs.h>
@class NSHashTable, NSObject, NSNumber;

@interface FPReachabilityMonitor : NSObject {

	NSHashTable* _reachabilityObservers;
	SCNetworkReachabilityRef _reachabilityRef;
	unsigned _reachabilityFlags;
	NSObject*<OS_dispatch_queue> _queue;
	id<NSObject> _accountDidChangeNotificationObserver;
	NSNumber* _isCellularEnabledForDocumentsAndData;

}

@property (assign,nonatomic) unsigned reachabilityFlags;              //@synthesize reachabilityFlags=_reachabilityFlags - In the implementation block
+(BOOL)isNetworkReachableForFlags:(unsigned)arg1 ;
+(id)sharedReachabilityMonitor;
+(id)_notifAccountStore;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setReachabilityFlags:(unsigned)arg1 ;
-(unsigned)reachabilityFlags;
-(BOOL)isNetworkReachableForBundle:(id)arg1 ;
-(void)_accountDidChange;
-(BOOL)_isCellularAllowedForBR;
@end

