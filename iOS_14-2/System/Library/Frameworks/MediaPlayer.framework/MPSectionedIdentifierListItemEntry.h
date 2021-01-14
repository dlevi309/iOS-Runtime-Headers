/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) SCD_Struct_MP21 state; 
@property (getter=isDataSourceCloned,nonatomic,readonly) BOOL dataSourceCloned;                         //@synthesize dataSourceCloned=_dataSourceCloned - In the implementation block
@property (getter=isDataSourceMoved,nonatomic,readonly) BOOL dataSourceMoved;                           //@synthesize dataSourceMoved=_dataSourceMoved - In the implementation block
@property (getter=isUserRemoved,nonatomic,readonly) BOOL userRemoved;                                   //@synthesize userRemoved=_userRemoved - In the implementation block
@property (getter=isUserMoved,nonatomic,readonly) BOOL userMoved;                                       //@synthesize userMoved=_userMoved - In the implementation block
@property (getter=isUserCloned,nonatomic,readonly) BOOL userCloned;                                     //@synthesize userCloned=_userCloned - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 generationPrefix:(id)arg3 ;
+(id)itemEntryWithSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 ;
-(NSString *)itemIdentifier;
-(id)stringRepresentation;
-(BOOL)isRemoved;
-(BOOL)hasClones;
-(void)prepareForDealloc;
-(void)setDataSourceRemoved;
-(BOOL)isDataSourceRemoved;
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
-(NSMutableArray *)clonedEntries;
-(void)setClonedEntries:(NSMutableArray *)arg1 ;
-(BOOL)isDataSourceCloned;
-(BOOL)isDataSourceMoved;
-(BOOL)isUserRemoved;
-(BOOL)isUserMoved;
-(BOOL)isUserCloned;
-(void)encodeWithCoder:(id)arg1 ;
-(MPSectionedIdentifierListItemEntry *)rootEntry;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_MP21)state;
-(long long)entryType;
@end

