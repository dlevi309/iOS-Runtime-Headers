/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
+(id)headEntryWithSectionIdentifier:(id)arg1 ;
-(NSString *)description;
-(long long)entryType;
-(id<MPSectionedIdentifierListDataSource>)dataSource;
-(void)setDataSource:(id<MPSectionedIdentifierListDataSource>)arg1 ;
-(id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2 ;
-(id)nextEntries;
-(void)setBranchDepth:(long long)arg1 ;
-(MPSectionedIdentifierListItemEntry *)lastItemEntry;
-(NSMutableDictionary *)identifiersItemEntryMap;
-(MPSectionedIdentifierListTailEntry *)tailEntry;
-(void)setTailEntry:(MPSectionedIdentifierListTailEntry *)arg1 ;
-(void)setLastItemEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(BOOL)isShuffledHead;
-(void)setShuffledHead:(BOOL)arg1 ;
@end

