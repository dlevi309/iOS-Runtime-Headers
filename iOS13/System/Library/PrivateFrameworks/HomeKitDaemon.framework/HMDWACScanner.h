/*
* Generated on Monday, March 1, 2021 at 2:33:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HAPAirPlayAccessoryBrowserDelegate.h>
#import <libobjc.A.dylib/HMDWACScanner.h>

@protocol HMDWACScanner
@required
-(void)resume;
-(void)stop;
-(void)start;
-(void)setDelegate:(id)arg1 queue:(id)arg2;
-(void)backoff;
-(void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg1;

@end


@protocol OS_dispatch_queue, HMDWACScannerDelegate;
@class NSObject, CUWiFiScanner, NSString;

@interface HMDWACScanner : NSObject <HMFLogging, HAPAirPlayAccessoryBrowserDelegate, HMDWACScanner> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	CUWiFiScanner* _wifiScanner;
	id<HMDWACScannerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (assign,nonatomic,__weak) id<HMDWACScannerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;              //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(id<HMDWACScannerDelegate>)delegate;
-(void)setDelegate:(id<HMDWACScannerDelegate>)arg1 ;
-(void)resume;
-(void)stop;
-(void)start;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)wacBrowser:(id)arg1 didFindAirPlayDevice:(id)arg2 ;
-(void)wacBrowser:(id)arg1 didUpdateAirPlayDevice:(id)arg2 ;
-(void)wacBrowser:(id)arg1 didRemoveAirPlayDevice:(id)arg2 ;
-(void)backoff;
-(void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg1 ;
@end

