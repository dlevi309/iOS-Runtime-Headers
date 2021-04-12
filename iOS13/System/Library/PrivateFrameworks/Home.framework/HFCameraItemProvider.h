/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, HMRoom, NSMutableSet;

@interface HFCameraItemProvider : HFItemProvider {

	BOOL _onlyShowsFavorites;
	/*^block*/id _filter;
	HMHome* _home;
	HMRoom* _room;
	NSMutableSet* _cameraItems;

}

@property (nonatomic,retain) NSMutableSet * cameraItems;              //@synthesize cameraItems=_cameraItems - In the implementation block
@property (nonatomic,copy) id filter;                                 //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) HMHome * home;                         //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) HMRoom * room;                           //@synthesize room=_room - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;                 //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMHome *)home;
-(id)items;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(HMRoom *)room;
-(id)initWithHome:(id)arg1 ;
-(id)reloadItems;
-(void)setRoom:(HMRoom *)arg1 ;
-(id)invalidationReasons;
-(/*^block*/id)_roomFilter;
-(/*^block*/id)_favoriteFilter;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(void)setCameraItems:(NSMutableSet *)arg1 ;
-(NSMutableSet *)cameraItems;
@end

