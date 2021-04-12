/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDObjectLookup.h>
#import <libobjc.A.dylib/HMDObjectLookupScanProtocol.h>

@class HMDHomeManager, NSString;

@interface HMDHomeManagerObjectLookup : HMDObjectLookup <HMDObjectLookupScanProtocol> {

	HMDHomeManager* _homeManager;

}

@property (nonatomic,__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(void)_scanHomes;
-(void)_scanCloudZones;
-(void)_scanAccounts;
-(void)scanObjects;
@end

