/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItem.h>

@class HMHome, NAFuture;

@interface HUSoftwareUpdateFetchItem : HFItem {

	HMHome* _home;
	NAFuture* _softwareUpdateFetchFuture;

}

@property (nonatomic,readonly) HMHome * home;                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NAFuture * softwareUpdateFetchFuture;              //@synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture - In the implementation block
-(id)init;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HMHome *)home;
-(NAFuture *)softwareUpdateFetchFuture;
-(void)setSoftwareUpdateFetchFuture:(NAFuture *)arg1 ;
-(id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2 ;
@end

