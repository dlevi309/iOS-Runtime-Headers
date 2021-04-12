/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItem.h>

@class HMHome, HMRoom;

@interface HFCameraListItem : HFItem {

	BOOL _onlyShowsFavorites;
	HMHome* _home;
	HMRoom* _room;

}

@property (nonatomic,readonly) HMHome * home;                      //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMRoom * room;                      //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;              //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
-(id)init;
-(HMHome *)home;
-(HMRoom *)room;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(id)initWithHome:(id)arg1 room:(id)arg2 ;
@end

