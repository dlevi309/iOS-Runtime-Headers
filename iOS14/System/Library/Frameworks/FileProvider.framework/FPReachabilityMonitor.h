/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)sharedReachabilityMonitor;
+(BOOL)isNetworkReachableForFlags:(unsigned)arg1 ;
+(id)_notifAccountStore;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)setReachabilityFlags:(unsigned)arg1 ;
-(unsigned)reachabilityFlags;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isNetworkReachableForBundle:(id)arg1 ;
-(void)invalidate;
-(void)_accountDidChange;
-(BOOL)_isCellularAllowedForBR;
-(void)dealloc;
@end

