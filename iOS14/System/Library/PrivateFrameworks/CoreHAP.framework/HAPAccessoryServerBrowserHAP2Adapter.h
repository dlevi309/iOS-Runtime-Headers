/*
* Generated on Thursday, January 14, 2021 at 2:27:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
*/

#import <CoreHAP/HAPAccessoryServerBrowser.h>
#import <libobjc.A.dylib/HAP2AccessoryServerBrowserDelegate.h>

@protocol HAPAccessoryServerBrowserDelegate, OS_dispatch_queue, HAP2AccessoryServerBrowserPrivate;
@class NSObject, NSMutableDictionary, HAP2PropertyLock, NSString;

@interface HAPAccessoryServerBrowserHAP2Adapter : HAPAccessoryServerBrowser <HAP2AccessoryServerBrowserDelegate> {

	id<HAPAccessoryServerBrowserDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSMutableDictionary* _discoveredServers;
	id<HAP2AccessoryServerBrowserPrivate> _browser;
	HAP2PropertyLock* _propertyLock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQueue:(id)arg1 ;
-(void)deRegisterAccessoryWithIdentifier:(id)arg1 ;
-(BOOL)isPaired:(id)arg1 ;
-(id)initWithHAP2Browser:(id)arg1 queue:(id)arg2 ;
-(long long)linkType;
-(id)initWithQueue:(id)arg1 storage:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didLoseUnpairedAccessoryServer:(id)arg2 error:(id)arg3 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)accessoryServerBrowser:(id)arg1 didDiscoverPairedAccessoryServer:(id)arg2 ;
-(void)registerPairedAccessoryWithIdentifier:(id)arg1 ;
-(void)accessoryServerBrowser:(id)arg1 didDiscoverUnpairedAccessoryServer:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didStartDiscoveringWithError:(id)arg2 ;
-(void)accessoryServerBrowser:(id)arg1 didStopDiscoveringWithError:(id)arg2 ;
-(void)discoverAccessoryServerWithIdentifier:(id)arg1 ;
-(void)stopDiscoveringAccessoryServers;
-(void)stopConfirmingPairedAccessoryReachability;
-(void)accessoryServerBrowser:(id)arg1 didLosePairedAccessoryServer:(id)arg2 error:(id)arg3 ;
-(void)startConfirmingPairedAccessoryReachability;
-(void)startDiscoveringAccessoryServers;
@end

