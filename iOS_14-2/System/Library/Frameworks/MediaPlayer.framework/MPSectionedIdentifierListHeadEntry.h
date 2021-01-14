/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@protocol MPSectionedIdentifierListDataSource;
@class NSMutableDictionary, MPSectionedIdentifierListTailEntry, MPSectionedIdentifierListItemEntry, NSString;

@interface MPSectionedIdentifierListHeadEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	BOOL _shuffledHead;
	NSMutableDictionary* _identifiersItemEntryMap;
	MPSectionedIdentifierListTailEntry* _tailEntry;
	MPSectionedIdentifierListItemEntry* _lastItemEntry;
	id<MPSectionedIdentifierListDataSource> _dataSource;

}

@property (nonatomic,readonly) NSMutableDictionary * identifiersItemEntryMap;                 //@synthesize identifiersItemEntryMap=_identifiersItemEntryMap - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListTailEntry * tailEntry;                  //@synthesize tailEntry=_tailEntry - In the implementation block
@property (nonatomic,retain) MPSectionedIdentifierListItemEntry * lastItemEntry;              //@synthesize lastItemEntry=_lastItemEntry - In the implementation block
@property (nonatomic,retain) id<MPSectionedIdentifierListDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isShuffledHead,nonatomic) BOOL shuffledHead;                         //@synthesize shuffledHead=_shuffledHead - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)headEntryWithSectionIdentifier:(id)arg1 ;
-(MPSectionedIdentifierListTailEntry *)tailEntry;
-(id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)nextEntries;
-(void)setBranchDepth:(long long)arg1 ;
-(MPSectionedIdentifierListItemEntry *)lastItemEntry;
-(NSMutableDictionary *)identifiersItemEntryMap;
-(void)setTailEntry:(MPSectionedIdentifierListTailEntry *)arg1 ;
-(void)setLastItemEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(BOOL)isShuffledHead;
-(void)setShuffledHead:(BOOL)arg1 ;
-(id<MPSectionedIdentifierListDataSource>)dataSource;
-(NSString *)description;
-(void)setDataSource:(id<MPSectionedIdentifierListDataSource>)arg1 ;
-(long long)entryType;
@end

