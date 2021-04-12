/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>
#import <libobjc.A.dylib/HFServiceLikeBuilder.h>

@protocol HFIconDescriptor;
@class NSString, HFMutableSetDiff, HFRoomBuilder, HMServiceGroup, NSArray;

@interface HFServiceGroupBuilder : HFItemBuilder <HFServiceLikeBuilder> {

	BOOL isFavorite;
	BOOL _hasSetRoom;
	BOOL _hasSetIcon;
	id<HFIconDescriptor> _iconDescriptor;
	NSString* _name;
	HFMutableSetDiff* _serviceUUIDs;
	HFRoomBuilder* _roomBuilder;

}

@property (nonatomic,readonly) HFMutableSetDiff * serviceUUIDs;                 //@synthesize serviceUUIDs=_serviceUUIDs - In the implementation block
@property (nonatomic,retain) HFRoomBuilder * roomBuilder;                       //@synthesize roomBuilder=_roomBuilder - In the implementation block
@property (assign,nonatomic) BOOL hasSetRoom;                                   //@synthesize hasSetRoom=_hasSetRoom - In the implementation block
@property (assign,nonatomic) BOOL hasSetIcon;                                   //@synthesize hasSetIcon=_hasSetIcon - In the implementation block
@property (nonatomic,readonly) HMServiceGroup * serviceGroup; 
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * services; 
@property (nonatomic,readonly) NSString * primaryServiceType; 
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor;               //@synthesize iconDescriptor=_iconDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) BOOL supportsFavoriting; 
@property (nonatomic,retain) HFRoomBuilder * room; 
@property (assign,nonatomic) BOOL isFavorite; 
@property (nonatomic,readonly) NSArray * availableIconDescriptors; 
+(Class)homeKitRepresentationClass;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)services;
-(NSString *)originalName;
-(BOOL)isFavorite;
-(void)setIsFavorite:(BOOL)arg1 ;
-(id)accessories;
-(HFRoomBuilder *)room;
-(void)addService:(id)arg1 ;
-(void)removeService:(id)arg1 ;
-(void)setRoom:(HFRoomBuilder *)arg1 ;
-(id)_updateName;
-(HMServiceGroup *)serviceGroup;
-(void)setServiceGroup:(HMServiceGroup *)arg1 ;
-(id)_updateIcon;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(HFRoomBuilder *)roomBuilder;
-(id<HFIconDescriptor>)iconDescriptor;
-(id)removeItemFromHome;
-(BOOL)supportsFavoriting;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(NSArray *)availableIconDescriptors;
-(id)_updateFavorite;
-(BOOL)hasSetRoom;
-(void)setRoomBuilder:(HFRoomBuilder *)arg1 ;
-(void)setHasSetRoom:(BOOL)arg1 ;
-(id)_rooms;
-(void)setHasSetIcon:(BOOL)arg1 ;
-(BOOL)shouldAllowAddingService:(id)arg1 ;
-(HFMutableSetDiff *)serviceUUIDs;
-(id)_createServiceGroup;
-(id)_updateRooms;
-(id)_updateServices;
-(BOOL)hasSetIcon;
-(id)_mostCommonIconDescriptor;
-(BOOL)_supportsCustomIcons;
-(NSString *)primaryServiceType;
@end

