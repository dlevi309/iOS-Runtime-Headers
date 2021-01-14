/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSArray, EDAMPreferences;

@interface EDAMSyncChunk : FATObject {

	NSNumber* _currentTime;
	NSNumber* _chunkHighUSN;
	NSNumber* _updateCount;
	NSArray* _notes;
	NSArray* _notebooks;
	NSArray* _tags;
	NSArray* _searches;
	NSArray* _resources;
	NSArray* _expungedNotes;
	NSArray* _expungedNotebooks;
	NSArray* _expungedTags;
	NSArray* _expungedSearches;
	NSArray* _linkedNotebooks;
	NSArray* _expungedLinkedNotebooks;
	EDAMPreferences* _preferences;
	NSArray* _notesNoLongerSharedWithMe;
	NSArray* _linkedAccounts;
	NSArray* _expungedLinkedAccounts;

}

@property (nonatomic,retain) NSNumber * currentTime;                           //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSNumber * chunkHighUSN;                          //@synthesize chunkHighUSN=_chunkHighUSN - In the implementation block
@property (nonatomic,retain) NSNumber * updateCount;                           //@synthesize updateCount=_updateCount - In the implementation block
@property (nonatomic,retain) NSArray * notes;                                  //@synthesize notes=_notes - In the implementation block
@property (nonatomic,retain) NSArray * notebooks;                              //@synthesize notebooks=_notebooks - In the implementation block
@property (nonatomic,retain) NSArray * tags;                                   //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain) NSArray * searches;                               //@synthesize searches=_searches - In the implementation block
@property (nonatomic,retain) NSArray * resources;                              //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) NSArray * expungedNotes;                          //@synthesize expungedNotes=_expungedNotes - In the implementation block
@property (nonatomic,retain) NSArray * expungedNotebooks;                      //@synthesize expungedNotebooks=_expungedNotebooks - In the implementation block
@property (nonatomic,retain) NSArray * expungedTags;                           //@synthesize expungedTags=_expungedTags - In the implementation block
@property (nonatomic,retain) NSArray * expungedSearches;                       //@synthesize expungedSearches=_expungedSearches - In the implementation block
@property (nonatomic,retain) NSArray * linkedNotebooks;                        //@synthesize linkedNotebooks=_linkedNotebooks - In the implementation block
@property (nonatomic,retain) NSArray * expungedLinkedNotebooks;                //@synthesize expungedLinkedNotebooks=_expungedLinkedNotebooks - In the implementation block
@property (nonatomic,retain) EDAMPreferences * preferences;                    //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,retain) NSArray * notesNoLongerSharedWithMe;              //@synthesize notesNoLongerSharedWithMe=_notesNoLongerSharedWithMe - In the implementation block
@property (nonatomic,retain) NSArray * linkedAccounts;                         //@synthesize linkedAccounts=_linkedAccounts - In the implementation block
@property (nonatomic,retain) NSArray * expungedLinkedAccounts;                 //@synthesize expungedLinkedAccounts=_expungedLinkedAccounts - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)notes;
-(NSArray *)tags;
-(void)setNotes:(NSArray *)arg1 ;
-(NSArray *)resources;
-(EDAMPreferences *)preferences;
-(void)setSearches:(NSArray *)arg1 ;
-(void)setCurrentTime:(NSNumber *)arg1 ;
-(void)setPreferences:(EDAMPreferences *)arg1 ;
-(NSNumber *)currentTime;
-(void)setResources:(NSArray *)arg1 ;
-(NSNumber *)updateCount;
-(void)setUpdateCount:(NSNumber *)arg1 ;
-(void)setTags:(NSArray *)arg1 ;
-(NSArray *)searches;
-(NSNumber *)chunkHighUSN;
-(void)setChunkHighUSN:(NSNumber *)arg1 ;
-(NSArray *)notebooks;
-(void)setNotebooks:(NSArray *)arg1 ;
-(NSArray *)expungedNotes;
-(void)setExpungedNotes:(NSArray *)arg1 ;
-(NSArray *)expungedNotebooks;
-(void)setExpungedNotebooks:(NSArray *)arg1 ;
-(NSArray *)expungedTags;
-(void)setExpungedTags:(NSArray *)arg1 ;
-(NSArray *)expungedSearches;
-(void)setExpungedSearches:(NSArray *)arg1 ;
-(NSArray *)linkedNotebooks;
-(void)setLinkedNotebooks:(NSArray *)arg1 ;
-(NSArray *)expungedLinkedNotebooks;
-(void)setExpungedLinkedNotebooks:(NSArray *)arg1 ;
-(NSArray *)notesNoLongerSharedWithMe;
-(void)setNotesNoLongerSharedWithMe:(NSArray *)arg1 ;
-(NSArray *)linkedAccounts;
-(void)setLinkedAccounts:(NSArray *)arg1 ;
-(NSArray *)expungedLinkedAccounts;
-(void)setExpungedLinkedAccounts:(NSArray *)arg1 ;
@end

