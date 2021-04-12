/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString;

@interface GKGridLayoutMetrics : NSObject <NSCopying> {

	NSMutableDictionary* _keyToMetrics;
	NSMutableDictionary* _locationToKeyList;
	NSString* _layoutKey;

}

@property (nonatomic,retain) NSMutableDictionary * keyToMetrics;                   //@synthesize keyToMetrics=_keyToMetrics - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * locationToKeyList;              //@synthesize locationToKeyList=_locationToKeyList - In the implementation block
@property (nonatomic,retain) NSString * layoutKey;                                 //@synthesize layoutKey=_layoutKey - In the implementation block
+(id)metrics;
-(id)init;
-(long long)prepareLayout:(id)arg1 startingAtSection:(long long)arg2 ;
-(id)description;
-(void)insertSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3 ;
-(void)addSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(unsigned long long)arg3 ;
-(id)localDescription;
-(NSMutableDictionary *)locationToKeyList;
-(NSMutableDictionary *)keyToMetrics;
-(void)setLayoutKey:(NSString *)arg1 ;
-(void)enumerateSupplementaryLocations:(/*^block*/id)arg1 ;
-(id)keyListForLocation:(unsigned long long)arg1 ;
-(void)replaceSupplementaryMetrics:(id)arg1 forKey:(id)arg2 ;
-(id)_gkDescription;
-(id)listForLocation:(unsigned long long)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(id)supplementaryMetricsForKey:(id)arg1 ;
-(void)enumerateSupplementaryMetricsUsingBlock:(/*^block*/id)arg1 ;
-(void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg1 atLocation:(unsigned long long)arg2 globalRange:(NSRange)arg3 ;
-(void)removeSupplementaryMetricsForKey:(id)arg1 ;
-(void)setKeyToMetrics:(NSMutableDictionary *)arg1 ;
-(void)setLocationToKeyList:(NSMutableDictionary *)arg1 ;
-(NSString *)layoutKey;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)configureCollectionView:(id)arg1 ;
@end

