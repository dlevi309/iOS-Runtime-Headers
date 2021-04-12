/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemBuilder.h>

@class NSString, HFWallpaperEditCollectionBuilder, HFMutableSetDiff, HMRoom, NSSet;

@interface HFRoomBuilder : HFItemBuilder {

	NSString* _name;
	HFWallpaperEditCollectionBuilder* _wallpaperBuilder;
	HFMutableSetDiff* _accessoryUUIDs;

}

@property (nonatomic,retain) HFWallpaperEditCollectionBuilder * wallpaperBuilder;              //@synthesize wallpaperBuilder=_wallpaperBuilder - In the implementation block
@property (nonatomic,retain) HFMutableSetDiff * accessoryUUIDs;                                //@synthesize accessoryUUIDs=_accessoryUUIDs - In the implementation block
@property (nonatomic,readonly) HMRoom * room; 
@property (nonatomic,copy) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSSet * accessories; 
+(Class)homeKitRepresentationClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)_updateAccessories;
-(NSSet *)accessories;
-(HMRoom *)room;
-(void)addAccessory:(id)arg1 ;
-(void)setRoom:(HMRoom *)arg1 ;
-(id)_updateName;
-(void)removeAccessory:(id)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)_performValidation;
-(id)commitItem;
-(HFWallpaperEditCollectionBuilder *)wallpaperBuilder;
-(void)setWallpaperBuilder:(HFWallpaperEditCollectionBuilder *)arg1 ;
-(HFMutableSetDiff *)accessoryUUIDs;
-(void)setAccessoryUUIDs:(HFMutableSetDiff *)arg1 ;
-(id)_createRoom;
@end

