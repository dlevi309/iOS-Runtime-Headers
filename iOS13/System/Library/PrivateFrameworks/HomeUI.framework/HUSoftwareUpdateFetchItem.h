/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(HMHome *)home;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(NAFuture *)softwareUpdateFetchFuture;
-(void)setSoftwareUpdateFetchFuture:(NAFuture *)arg1 ;
-(id)initWithHome:(id)arg1 softwareUpdateFetchFuture:(id)arg2 ;
@end

