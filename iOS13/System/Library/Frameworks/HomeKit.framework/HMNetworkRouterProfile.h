/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HMAccessoryProfile.h>
#import <libobjc.A.dylib/_HMNetworkRouterProfileDelegate.h>

@protocol HMNetworkRouterProfileDelegate;
@class NSArray, NSString;

@interface HMNetworkRouterProfile : HMAccessoryProfile <_HMNetworkRouterProfileDelegate> {

	id<HMNetworkRouterProfileDelegate> _delegate;

}

@property (readonly) unsigned long long networkStatus; 
@property (__weak) id<HMNetworkRouterProfileDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isSatellite,readonly) BOOL satellite; 
@property (readonly) NSArray * satelliteProfiles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id<HMNetworkRouterProfileDelegate>)delegate;
-(void)setDelegate:(id<HMNetworkRouterProfileDelegate>)arg1 ;
-(id)services;
-(unsigned long long)networkStatus;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)initWithNetworkRouterProfile:(id)arg1 ;
-(id)networkRouterProfile;
-(id)identifiersForSatelliteProfiles;
-(void)setIdentifiersForSatelliteProfiles:(id)arg1 ;
-(void)routerProfileDidUpdateIdentifiersForSatellites:(id)arg1 ;
-(void)routerProfileDidUpdateNetworkStatus:(id)arg1 ;
-(BOOL)isSatellite;
-(NSArray *)satelliteProfiles;
@end

