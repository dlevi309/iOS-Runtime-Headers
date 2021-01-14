/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/


@protocol WiFiAvailabilitySource <NSObject>
@property (nonatomic,copy) id changeHandler; 
@property (nonatomic,copy) id relevancyHandler; 
@optional
-(id)candidateNetworks;
-(void)fetchCandidateNetworksMatchingBSSIDs:(id)arg1 completionHandler:(/*^block*/id)arg2;

@required
-(id)changeHandler;
-(void)setChangeHandler:(/*^block*/id)arg1;
-(id)relevancyHandler;
-(id)relevantNetworks;
-(void)setRelevancyHandler:(/*^block*/id)arg1;

@end

