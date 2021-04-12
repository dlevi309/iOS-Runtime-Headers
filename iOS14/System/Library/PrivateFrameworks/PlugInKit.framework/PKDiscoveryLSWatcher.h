/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
*/

#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@class PKDiscoveryDriver, NSString;

@interface PKDiscoveryLSWatcher : NSObject <LSApplicationWorkspaceObserverProtocol> {

	PKDiscoveryDriver* _wdriver;

}

@property (__weak) PKDiscoveryDriver * wdriver;                     //@synthesize wdriver=_wdriver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopUpdates;
-(id)initWithDriver:(id)arg1 ;
-(void)update;
-(void)pluginsDidInstall:(id)arg1 ;
-(PKDiscoveryDriver *)wdriver;
-(void)pluginsDidUninstall:(id)arg1 ;
-(void)setWdriver:(PKDiscoveryDriver *)arg1 ;
-(void)updateWithUninstalledProxies:(id)arg1 ;
@end

