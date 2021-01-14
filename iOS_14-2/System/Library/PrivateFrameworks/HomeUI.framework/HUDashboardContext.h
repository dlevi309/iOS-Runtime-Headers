/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class HMHome, HMRoom, NSString;

@interface HUDashboardContext : NSObject {

	BOOL _allowsAdding;
	BOOL _allowsAnnounce;
	BOOL _allowsEditing;
	BOOL _shouldHideHeadline;
	BOOL _shouldHideStatus;
	BOOL _shouldHideStatusBanner;
	BOOL _shouldHideCameras;
	BOOL _shouldHidePlaceholderButtons;
	BOOL _shouldIncludeRoomInAccessoryNames;
	BOOL _onlyShowsFavorites;
	HMHome* _home;
	HMRoom* _room;
	unsigned long long _dashboardType;

}

@property (nonatomic,readonly) unsigned long long dashboardType;                  //@synthesize dashboardType=_dashboardType - In the implementation block
@property (assign,nonatomic) BOOL allowsAdding;                                   //@synthesize allowsAdding=_allowsAdding - In the implementation block
@property (assign,nonatomic) BOOL allowsAnnounce;                                 //@synthesize allowsAnnounce=_allowsAnnounce - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                  //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) BOOL shouldHideHeadline;                             //@synthesize shouldHideHeadline=_shouldHideHeadline - In the implementation block
@property (assign,nonatomic) BOOL shouldHideStatus;                               //@synthesize shouldHideStatus=_shouldHideStatus - In the implementation block
@property (assign,nonatomic) BOOL shouldHideStatusBanner;                         //@synthesize shouldHideStatusBanner=_shouldHideStatusBanner - In the implementation block
@property (assign,nonatomic) BOOL shouldHideCameras;                              //@synthesize shouldHideCameras=_shouldHideCameras - In the implementation block
@property (assign,nonatomic) BOOL shouldIncludeRoomInAccessoryNames;              //@synthesize shouldIncludeRoomInAccessoryNames=_shouldIncludeRoomInAccessoryNames - In the implementation block
@property (assign,nonatomic) BOOL onlyShowsFavorites;                             //@synthesize onlyShowsFavorites=_onlyShowsFavorites - In the implementation block
@property (assign,nonatomic) BOOL shouldHidePlaceholderButtons;                   //@synthesize shouldHidePlaceholderButtons=_shouldHidePlaceholderButtons - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) HMHome * home;                                     //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HMRoom * room;                                     //@synthesize room=_room - In the implementation block
+(id)na_identity;
+(id)roomDashboardForRoom:(id)arg1 ;
+(id)favoritesDashboardForHome:(id)arg1 ;
-(HMRoom *)room;
-(BOOL)allowsEditing;
-(BOOL)shouldHideStatus;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(BOOL)allowsAdding;
-(id)description;
-(unsigned long long)hash;
-(BOOL)allowsAnnounce;
-(NSString *)identifier;
-(BOOL)shouldIncludeRoomInAccessoryNames;
-(BOOL)onlyShowsFavorites;
-(void)setOnlyShowsFavorites:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)shouldHideHeadline;
-(HMHome *)home;
-(BOOL)shouldHideStatusBanner;
-(BOOL)shouldHidePlaceholderButtons;
-(BOOL)shouldHideCameras;
-(BOOL)shouldHideHomeKitObject:(id)arg1 ;
-(BOOL)shouldHideHomeKitObject:(id)arg1 limitedByServiceTypes:(id)arg2 ;
-(id)initWithType:(unsigned long long)arg1 home:(id)arg2 room:(id)arg3 ;
-(void)setShouldHideHeadline:(BOOL)arg1 ;
-(void)setShouldIncludeRoomInAccessoryNames:(BOOL)arg1 ;
-(void)setAllowsAdding:(BOOL)arg1 ;
-(void)setAllowsAnnounce:(BOOL)arg1 ;
-(void)setShouldHideStatus:(BOOL)arg1 ;
-(void)setShouldHideStatusBanner:(BOOL)arg1 ;
-(void)setShouldHideCameras:(BOOL)arg1 ;
-(void)setShouldHidePlaceholderButtons:(BOOL)arg1 ;
-(BOOL)_hasOnlySensorServices:(id)arg1 ;
-(unsigned long long)dashboardType;
-(BOOL)_shouldHideService:(id)arg1 limitedByServiceTypes:(id)arg2 ;
-(BOOL)_shouldHideServiceGroup:(id)arg1 limitedByServiceTypes:(id)arg2 ;
-(BOOL)_shouldHideAccessory:(id)arg1 limitedByServiceTypes:(id)arg2 ;
-(BOOL)_shouldHideMediaProfileContainer:(id)arg1 ;
@end

