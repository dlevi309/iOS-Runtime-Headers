/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/

#import <libobjc.A.dylib/FCNetworkReachabilityObserving.h>
#import <libobjc.A.dylib/SWReachabilityProvider.h>

@class FCNetworkReachability, NSHashTable, NSString;

@interface NUReachabilityProvider : NSObject <FCNetworkReachabilityObserving, SWReachabilityProvider> {

	FCNetworkReachability* _networkReachability;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) FCNetworkReachability * networkReachability;              //@synthesize networkReachability=_networkReachability - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isNetworkReachable;
-(NSHashTable *)observers;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(id)initWithNetworkReachability:(id)arg1 ;
-(FCNetworkReachability *)networkReachability;
-(void)addReachabilityObserver:(id)arg1 ;
-(void)removeReachabilityObserver:(id)arg1 ;
@end

