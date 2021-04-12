/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFMutableSetDiff, HMZone, NSSet;

@interface HFZoneBuilder : HFItemBuilder {

	NSString* _name;
	HFMutableSetDiff* _roomUUIDs;

}

@property (nonatomic,retain) HFMutableSetDiff * roomUUIDs;              //@synthesize roomUUIDs=_roomUUIDs - In the implementation block
@property (nonatomic,readonly) HMZone * zone; 
@property (nonatomic,copy) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * rooms; 
+(id)na_identity;
+(Class)homeKitRepresentationClass;
-(BOOL)isEqual:(id)arg1 ;
-(HMZone *)zone;
-(unsigned long long)hash;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSSet *)rooms;
-(void)setZone:(HMZone *)arg1 ;
-(id)_updateName;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(id)_updateRooms;
-(HFMutableSetDiff *)roomUUIDs;
-(void)setRoomUUIDs:(HFMutableSetDiff *)arg1 ;
-(id)_createZone;
-(void)addRoom:(id)arg1 ;
-(void)removeRoom:(id)arg1 ;
@end

