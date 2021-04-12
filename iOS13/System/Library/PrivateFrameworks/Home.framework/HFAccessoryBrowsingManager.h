/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HMAccessoryBrowserDelegate.h>

@class HMAccessoryBrowser, SFDeviceDiscovery, NSHashTable, NSMutableSet, NSArray, NSString;

@interface HFAccessoryBrowsingManager : NSObject <HMAccessoryBrowserDelegate> {

	BOOL _isBrowsing;
	HMAccessoryBrowser* _accessoryBrowser;
	SFDeviceDiscovery* _sharingDeviceBrowser;
	NSHashTable* _observers;
	NSMutableSet* _mutableDiscoveredSharingDevices;

}

@property (assign,nonatomic) BOOL isBrowsing;                                             //@synthesize isBrowsing=_isBrowsing - In the implementation block
@property (nonatomic,retain) HMAccessoryBrowser * accessoryBrowser;                       //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
@property (nonatomic,retain) SFDeviceDiscovery * sharingDeviceBrowser;                    //@synthesize sharingDeviceBrowser=_sharingDeviceBrowser - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableDiscoveredSharingDevices;              //@synthesize mutableDiscoveredSharingDevices=_mutableDiscoveredSharingDevices - In the implementation block
@property (nonatomic,readonly) NSArray * discoveredHMAccessories; 
@property (nonatomic,readonly) NSArray * discoveredSharingDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(BOOL)isBrowsing;
-(void)stopSearchingForNewAccessories;
-(void)startSearchingForNewAccessories;
-(void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2 ;
-(void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2 ;
-(void)setAccessoryBrowser:(HMAccessoryBrowser *)arg1 ;
-(HMAccessoryBrowser *)accessoryBrowser;
-(void)setMutableDiscoveredSharingDevices:(NSMutableSet *)arg1 ;
-(void)setSharingDeviceBrowser:(SFDeviceDiscovery *)arg1 ;
-(SFDeviceDiscovery *)sharingDeviceBrowser;
-(NSMutableSet *)mutableDiscoveredSharingDevices;
-(void)setIsBrowsing:(BOOL)arg1 ;
-(NSArray *)discoveredHMAccessories;
-(NSArray *)discoveredSharingDevices;
-(void)addBrowsingObserver:(id)arg1 ;
-(void)removeBrowsingObserver:(id)arg1 ;
@end

