/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)services;
-(id)initWithNetworkRouterProfile:(id)arg1 ;
-(id)networkRouterProfile;
-(id<HMNetworkRouterProfileDelegate>)delegate;
-(unsigned long long)networkStatus;
-(BOOL)isSatellite;
-(id)identifiersForSatelliteProfiles;
-(void)setIdentifiersForSatelliteProfiles:(id)arg1 ;
-(void)routerProfileDidUpdateIdentifiersForSatellites:(id)arg1 ;
-(void)routerProfileDidUpdateNetworkStatus:(id)arg1 ;
-(NSArray *)satelliteProfiles;
-(void)setDelegate:(id<HMNetworkRouterProfileDelegate>)arg1 ;
-(NSString *)description;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
@end

