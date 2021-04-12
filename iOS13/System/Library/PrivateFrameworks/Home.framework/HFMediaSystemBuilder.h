/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@protocol HFIconDescriptor;
@class HFAppleMusicAccountArbitrator, HMAccessory, HMMediaSystemBuilder, HFNamingComponents, HFRoomBuilder, HMMediaSystem, NSString, NSArray;

@interface HFMediaSystemBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL _isFavorite;
	BOOL _hasSetRoom;
	BOOL _isCreatingMediaSystem;
	id<HFIconDescriptor> _iconDescriptor;
	HFAppleMusicAccountArbitrator* _accountArbitrator;
	HMAccessory* _firstSetupSourceAccessory;
	HMMediaSystemBuilder* _homeKitMediaSystemBuilder;
	HFNamingComponents* _namingComponent;
	HFRoomBuilder* _roomBuilder;

}

@property (nonatomic,retain) HMMediaSystemBuilder * homeKitMediaSystemBuilder;               //@synthesize homeKitMediaSystemBuilder=_homeKitMediaSystemBuilder - In the implementation block
@property (nonatomic,retain) HFNamingComponents * namingComponent;                           //@synthesize namingComponent=_namingComponent - In the implementation block
@property (nonatomic,retain) HFRoomBuilder * roomBuilder;                                    //@synthesize roomBuilder=_roomBuilder - In the implementation block
@property (assign,nonatomic) BOOL hasSetRoom;                                                //@synthesize hasSetRoom=_hasSetRoom - In the implementation block
@property (assign,nonatomic) BOOL isCreatingMediaSystem;                                     //@synthesize isCreatingMediaSystem=_isCreatingMediaSystem - In the implementation block
@property (nonatomic,readonly) HMMediaSystem * mediaSystem; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) HFAppleMusicAccountArbitrator * accountArbitrator;              //@synthesize accountArbitrator=_accountArbitrator - In the implementation block
@property (nonatomic,readonly) HMAccessory * firstSetupSourceAccessory;                      //@synthesize firstSetupSourceAccessory=_firstSetupSourceAccessory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite;                                                //@synthesize isFavorite=_isFavorite - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;                            //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
+(Class)homeKitRepresentationClass;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)originalName;
-(BOOL)isFavorite;
-(void)setIsFavorite:(BOOL)arg1 ;
-(id)accessories;
-(HFRoomBuilder *)room;
-(void)addAccessory:(id)arg1 ;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(id)_defaultName;
-(void)removeAccessory:(id)arg1 ;
-(HMMediaSystem *)mediaSystem;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(HFRoomBuilder *)roomBuilder;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setNamingComponent:(HFNamingComponents *)arg1 ;
-(HFNamingComponents *)namingComponent;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(HMMediaSystemBuilder *)homeKitMediaSystemBuilder;
-(id)accessoryForRole:(id)arg1 ;
-(BOOL)shouldAllowAddingAccessory:(id)arg1 ;
-(id)_firstUnpopulatedRole;
-(void)addAccessory:(id)arg1 role:(id)arg2 ;
-(BOOL)isCreatingMediaSystem;
-(id)roleForAccessory:(id)arg1 ;
-(id)_updateRoom;
-(HFAppleMusicAccountArbitrator *)accountArbitrator;
-(id)_commitChangesToMediaSystemBuilder;
-(id)_updateFavorite;
-(id)_updateAssistantAccessControl;
-(void)setMediaSystem:(HMMediaSystem *)arg1 ;
-(void)setHomeKitMediaSystemBuilder:(HMMediaSystemBuilder *)arg1 ;
-(BOOL)hasSetRoom;
-(void)setRoomBuilder:(HFRoomBuilder *)arg1 ;
-(void)setHasSetRoom:(BOOL)arg1 ;
-(BOOL)swapRoles;
-(id)_rooms;
-(void)setAccountArbitrator:(HFAppleMusicAccountArbitrator *)arg1 ;
-(HMAccessory *)firstSetupSourceAccessory;
-(void)setIsCreatingMediaSystem:(BOOL)arg1 ;
@end

