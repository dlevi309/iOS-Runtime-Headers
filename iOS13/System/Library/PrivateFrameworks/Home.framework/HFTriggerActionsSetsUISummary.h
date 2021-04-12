/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSString, NSMutableArray, NSMutableDictionary, NSArray;

@interface HFTriggerActionsSetsUISummary : NSObject {

	BOOL _needsIconSort;
	NSString* _uniqueServiceGroupName;
	unsigned long long _numberOfScenes;
	unsigned long long _numberOfStandaloneServices;
	unsigned long long _numberOfMediaAccessories;
	unsigned long long _totalStandaloneAndMediaAccessoriesCount;
	NSString* _firstSceneName;
	NSString* _firstServiceName;
	NSString* _mediaAccessoryName;
	NSMutableArray* _icons;
	NSMutableArray* _iconDescriptors;
	NSMutableDictionary* _iconCounter;
	NSString* _summaryDescription;
	NSArray* _summaryDescriptors;

}

@property (assign,nonatomic) unsigned long long numberOfScenes;                                       //@synthesize numberOfScenes=_numberOfScenes - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfStandaloneServices;                           //@synthesize numberOfStandaloneServices=_numberOfStandaloneServices - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMediaAccessories;                             //@synthesize numberOfMediaAccessories=_numberOfMediaAccessories - In the implementation block
@property (assign,nonatomic) unsigned long long totalStandaloneAndMediaAccessoriesCount;              //@synthesize totalStandaloneAndMediaAccessoriesCount=_totalStandaloneAndMediaAccessoriesCount - In the implementation block
@property (nonatomic,retain) NSString * firstSceneName;                                               //@synthesize firstSceneName=_firstSceneName - In the implementation block
@property (nonatomic,retain) NSString * firstServiceName;                                             //@synthesize firstServiceName=_firstServiceName - In the implementation block
@property (nonatomic,retain) NSString * mediaAccessoryName;                                           //@synthesize mediaAccessoryName=_mediaAccessoryName - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                                                  //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconDescriptors;                                        //@synthesize iconDescriptors=_iconDescriptors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * iconCounter;                                       //@synthesize iconCounter=_iconCounter - In the implementation block
@property (nonatomic,readonly) NSString * summaryDescription;                                         //@synthesize summaryDescription=_summaryDescription - In the implementation block
@property (nonatomic,readonly) NSArray * summaryDescriptors;                                          //@synthesize summaryDescriptors=_summaryDescriptors - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueServiceGroup; 
@property (assign,nonatomic) BOOL needsIconSort;                                                      //@synthesize needsIconSort=_needsIconSort - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfIcons; 
@property (nonatomic,retain) NSString * uniqueServiceGroupName;                                       //@synthesize uniqueServiceGroupName=_uniqueServiceGroupName - In the implementation block
-(id)init;
-(NSMutableArray *)icons;
-(void)setIcons:(NSMutableArray *)arg1 ;
-(NSString *)summaryDescription;
-(id)summaryText;
-(id)summaryIconDescriptors;
-(id)summaryIcons;
-(unsigned long long)numberOfIcons;
-(id)initWithSummaryText:(id)arg1 summaryIconDescriptors:(id)arg2 ;
-(void)addSceneNamed:(id)arg1 ;
-(void)addIconDescriptor:(id)arg1 ;
-(void)setUniqueServiceGroupName:(NSString *)arg1 ;
-(void)addServiceNamed:(id)arg1 ;
-(void)addMediaAccessoryNamed:(id)arg1 ;
-(NSString *)uniqueServiceGroupName;
-(unsigned long long)numberOfStandaloneServices;
-(unsigned long long)numberOfMediaAccessories;
-(id)summaryText:(BOOL)arg1 ;
-(unsigned long long)numberOfScenes;
-(unsigned long long)totalStandaloneAndMediaAccessoriesCount;
-(id)_descriptionForZeroAccessories;
-(id)_descriptionForZeroScenes;
-(NSString *)firstSceneName;
-(NSString *)firstServiceName;
-(NSString *)mediaAccessoryName;
-(BOOL)hasUniqueServiceGroup;
-(NSArray *)summaryDescriptors;
-(BOOL)needsIconSort;
-(void)_sortIconDescriptors;
-(NSMutableArray *)iconDescriptors;
-(void)setFirstSceneName:(NSString *)arg1 ;
-(void)setNumberOfScenes:(unsigned long long)arg1 ;
-(void)setFirstServiceName:(NSString *)arg1 ;
-(void)setNumberOfStandaloneServices:(unsigned long long)arg1 ;
-(void)_incrementIconCounter:(id)arg1 ;
-(void)setNeedsIconSort:(BOOL)arg1 ;
-(NSMutableDictionary *)iconCounter;
-(void)setMediaAccessoryName:(NSString *)arg1 ;
-(void)setNumberOfMediaAccessories:(unsigned long long)arg1 ;
-(id)initWithSummaryText:(id)arg1 summaryIconNames:(id)arg2 ;
-(void)setTotalStandaloneAndMediaAccessoriesCount:(unsigned long long)arg1 ;
-(void)setIconDescriptors:(NSMutableArray *)arg1 ;
-(void)setIconCounter:(NSMutableDictionary *)arg1 ;
@end

