/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUCCMosaicOrderable;
@class NSMutableArray, NSString, NSArray;

@interface HUCCMosaicLayout : NSObject {

	unsigned long long _layoutType;
	unsigned long long _priority;
	unsigned long long _scenesNeeded;
	unsigned long long _accessoriesNeeded;
	unsigned long long _numberOfFilledItems;
	unsigned long long _numberOfMisses;
	id<HUCCMosaicOrderable> _homeItem;
	NSMutableArray* _scenes;
	NSMutableArray* _accessories;
	NSMutableArray* _fillers;
	NSString* _layoutDescription;

}

@property (assign,nonatomic) unsigned long long scenesNeeded;                       //@synthesize scenesNeeded=_scenesNeeded - In the implementation block
@property (assign,nonatomic) unsigned long long accessoriesNeeded;                  //@synthesize accessoriesNeeded=_accessoriesNeeded - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFilledItems;              //@synthesize numberOfFilledItems=_numberOfFilledItems - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMisses;                     //@synthesize numberOfMisses=_numberOfMisses - In the implementation block
@property (nonatomic,retain) id<HUCCMosaicOrderable> homeItem;                      //@synthesize homeItem=_homeItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * scenes;                               //@synthesize scenes=_scenes - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessories;                          //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSMutableArray * fillers;                              //@synthesize fillers=_fillers - In the implementation block
@property (nonatomic,retain) NSString * layoutDescription;                          //@synthesize layoutDescription=_layoutDescription - In the implementation block
@property (nonatomic,readonly) NSArray * arrangedItems; 
@property (nonatomic,readonly) BOOL isComplete; 
@property (nonatomic,readonly) unsigned long long layoutType;                       //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;                         //@synthesize priority=_priority - In the implementation block
+(id)sortDescriptors;
+(id)allPortraitLayouts;
+(unsigned long long)maxItemsNeededForPortrait;
+(id)allLandscapeLayouts;
+(unsigned long long)maxItemsNeededForLandscape;
-(void)addItem:(id)arg1 ;
-(NSMutableArray *)scenes;
-(NSString *)layoutDescription;
-(BOOL)isComplete;
-(unsigned long long)layoutType;
-(id)initWithLayoutType:(unsigned long long)arg1 ;
-(NSMutableArray *)fillers;
-(id)description;
-(void)setAccessories:(NSMutableArray *)arg1 ;
-(NSMutableArray *)accessories;
-(void)setHomeItem:(id<HUCCMosaicOrderable>)arg1 ;
-(void)_addSceneItem:(id)arg1 ;
-(void)_addAccessoryItem:(id)arg1 ;
-(void)_addFillerItem:(id)arg1 ;
-(unsigned long long)scenesNeeded;
-(void)_registerPossibleMiss;
-(void)setScenesNeeded:(unsigned long long)arg1 ;
-(unsigned long long)accessoriesNeeded;
-(void)setAccessoriesNeeded:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMisses;
-(void)setNumberOfMisses:(unsigned long long)arg1 ;
-(void)_sizeAllItems;
-(unsigned long long)numberOfFilledItems;
-(id<HUCCMosaicOrderable>)homeItem;
-(unsigned long long)priority;
-(NSArray *)arrangedItems;
-(void)setScenes:(NSMutableArray *)arg1 ;
-(void)setFillers:(NSMutableArray *)arg1 ;
-(void)setLayoutDescription:(NSString *)arg1 ;
@end

