/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPSectionedIdentifierListEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationItem.h>

@class NSString, NSMutableArray;

@interface MPSectionedIdentifierListItemEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationItem> {

	BOOL _hasClones;
	BOOL _dataSourceCloned;
	BOOL _dataSourceMoved;
	BOOL _userRemoved;
	BOOL _userMoved;
	BOOL _userCloned;
	NSString* _itemIdentifier;
	MPSectionedIdentifierListItemEntry* _rootEntry;
	NSMutableArray* _clonedEntries;

}

@property (nonatomic,readonly) NSString * itemIdentifier;                                               //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic,__weak) MPSectionedIdentifierListItemEntry * rootEntry;                     //@synthesize rootEntry=_rootEntry - In the implementation block
@property (nonatomic,readonly) MPSectionedIdentifierListItemEntry * latestUserClone; 
@property (nonatomic,readonly) MPSectionedIdentifierListItemEntry * latestDataSourceClone; 
@property (nonatomic,readonly) BOOL hasClones;                                                          //@synthesize hasClones=_hasClones - In the implementation block
@property (nonatomic,retain) NSMutableArray * clonedEntries;                                            //@synthesize clonedEntries=_clonedEntries - In the implementation block
@property (getter=isRemoved,nonatomic,readonly) BOOL removed; 
@property (nonatomic,readonly) SCD_Struct_MP20 state; 
@property (getter=isDataSourceCloned,nonatomic,readonly) BOOL dataSourceCloned;                         //@synthesize dataSourceCloned=_dataSourceCloned - In the implementation block
@property (getter=isDataSourceMoved,nonatomic,readonly) BOOL dataSourceMoved;                           //@synthesize dataSourceMoved=_dataSourceMoved - In the implementation block
@property (getter=isUserRemoved,nonatomic,readonly) BOOL userRemoved;                                   //@synthesize userRemoved=_userRemoved - In the implementation block
@property (getter=isUserMoved,nonatomic,readonly) BOOL userMoved;                                       //@synthesize userMoved=_userMoved - In the implementation block
@property (getter=isUserCloned,nonatomic,readonly) BOOL userCloned;                                     //@synthesize userCloned=_userCloned - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 generationPrefix:(id)arg3 ;
+(id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)itemIdentifier;
-(SCD_Struct_MP20)state;
-(long long)entryType;
-(MPSectionedIdentifierListItemEntry *)rootEntry;
-(void)prepareForDealloc;
-(void)setDataSourceRemoved;
-(BOOL)isDataSourceRemoved;
-(BOOL)isRemoved;
-(void)setDataSourceCloned;
-(void)setDataSourceMoved;
-(void)setUserRemoved;
-(void)setUserMoved;
-(void)setUserCloned;
-(MPSectionedIdentifierListItemEntry *)latestUserClone;
-(MPSectionedIdentifierListItemEntry *)latestDataSourceClone;
-(id)newClonedEntry;
-(long long)_generationNumber;
-(void)setRootEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(BOOL)hasClones;
-(NSMutableArray *)clonedEntries;
-(void)setClonedEntries:(NSMutableArray *)arg1 ;
-(BOOL)isDataSourceCloned;
-(BOOL)isDataSourceMoved;
-(BOOL)isUserRemoved;
-(BOOL)isUserMoved;
-(BOOL)isUserCloned;
@end

