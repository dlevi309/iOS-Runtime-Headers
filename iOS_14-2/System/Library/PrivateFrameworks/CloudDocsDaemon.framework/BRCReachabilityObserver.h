/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <libobjc.A.dylib/BRCReachabilityDelegate.h>

@class NSString;

@interface BRCReachabilityObserver : NSObject <BRCReachabilityDelegate> {

	/*^block*/id _networkReachabilityDidChangeHandler;

}

@property (nonatomic,copy) id networkReachabilityDidChangeHandler;              //@synthesize networkReachabilityDidChangeHandler=_networkReachabilityDidChangeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)stopObservingNetworkReachabilityChanges;
-(void)startObservingNetworkReachabilityChanges;
-(id)networkReachabilityDidChangeHandler;
-(void)setNetworkReachabilityDidChangeHandler:(id)arg1 ;
@end

