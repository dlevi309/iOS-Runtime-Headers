/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GKCollectionViewDataSource, NSString, NSMutableDictionary;

@interface GKAggregateMapping : NSObject <NSCopying> {

	GKCollectionViewDataSource* _dataSource;
	long long _sectionCount;
	NSString* _dynamicTag;
	NSMutableDictionary* _globalToLocalSections;
	NSMutableDictionary* _localToGlobalSections;
	NSMutableDictionary* _globalSectionsToTags;

}

@property (nonatomic,retain) NSMutableDictionary * globalToLocalSections;              //@synthesize globalToLocalSections=_globalToLocalSections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * localToGlobalSections;              //@synthesize localToGlobalSections=_localToGlobalSections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * globalSectionsToTags;               //@synthesize globalSectionsToTags=_globalSectionsToTags - In the implementation block
@property (nonatomic,retain) GKCollectionViewDataSource * dataSource;                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) long long sectionCount;                                   //@synthesize sectionCount=_sectionCount - In the implementation block
@property (nonatomic,retain) NSString * dynamicTag;                                    //@synthesize dynamicTag=_dynamicTag - In the implementation block
-(NSMutableDictionary *)globalSectionsToTags;
-(NSMutableDictionary *)globalToLocalSections;
-(void)setGlobalToLocalSections:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSMutableDictionary *)localToGlobalSections;
-(void)setLocalToGlobalSections:(NSMutableDictionary *)arg1 ;
-(void)setGlobalSectionsToTags:(NSMutableDictionary *)arg1 ;
-(unsigned long long)localSectionForGlobalSection:(unsigned long long)arg1 ;
-(unsigned long long)globalSectionForLocalSection:(unsigned long long)arg1 ;
-(id)initWithGlobalToLocalMapping:(id)arg1 ;
-(void)addMappingFromGlobalSection:(unsigned long long)arg1 toLocalSection:(unsigned long long)arg2 withTag:(id)arg3 ;
-(id)localIndexPathForGlobalIndexPath:(id)arg1 ;
-(id)globalIndexPathForLocalIndexPath:(id)arg1 ;
-(id)tagForGlobalSection:(long long)arg1 ;
-(unsigned long long)updateMappingsStartingWithGlobalSection:(unsigned long long)arg1 ;
-(void)setSectionCount:(long long)arg1 ;
-(void)setDynamicTag:(NSString *)arg1 ;
-(GKCollectionViewDataSource *)dataSource;
-(id)description;
-(void)setDataSource:(GKCollectionViewDataSource *)arg1 ;
-(id)_gkDescriptionWithChildren:(long long)arg1 ;
-(NSString *)dynamicTag;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(long long)sectionCount;
@end

