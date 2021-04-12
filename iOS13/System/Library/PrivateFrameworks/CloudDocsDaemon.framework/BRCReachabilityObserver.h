/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)stopObservingNetworkReachabilityChanges;
-(void)networkReachabilityChanged:(BOOL)arg1 ;
-(void)startObservingNetworkReachabilityChanges;
-(id)networkReachabilityDidChangeHandler;
-(void)setNetworkReachabilityDidChangeHandler:(id)arg1 ;
@end

