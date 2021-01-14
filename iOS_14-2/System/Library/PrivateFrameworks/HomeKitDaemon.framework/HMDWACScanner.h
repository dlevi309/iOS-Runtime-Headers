/*
* Generated on Thursday, January 14, 2021 at 2:25:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HAPAirPlayAccessoryBrowserDelegate.h>
#import <libobjc.A.dylib/HMDWACScanner.h>

@protocol HMDWACScanner
@required
-(void)start;
-(void)setDelegate:(id)arg1 queue:(id)arg2;
-(void)stop;
-(void)backoff;
-(void)resume;
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
-(void)start;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)stop;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<HMDWACScannerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)backoff;
-(void)resume;
-(void)wacBrowser:(id)arg1 didFindAirPlayDevice:(id)arg2 ;
-(void)wacBrowser:(id)arg1 didRemoveAirPlayDevice:(id)arg2 ;
-(void)wacBrowser:(id)arg1 didUpdateAirPlayDevice:(id)arg2 ;
-(void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)arg1 ;
@end

