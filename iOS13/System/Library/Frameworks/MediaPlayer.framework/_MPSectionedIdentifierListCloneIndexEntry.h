/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPSectionedIdentifierListItemEntry, NSMutableSet;

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject {

	MPSectionedIdentifierListItemEntry* _rootEntry;
	NSMutableSet* _clonedEntries;

}

@property (nonatomic,retain) MPSectionedIdentifierListItemEntry * rootEntry;              //@synthesize rootEntry=_rootEntry - In the implementation block
@property (nonatomic,retain) NSMutableSet * clonedEntries;                                //@synthesize clonedEntries=_clonedEntries - In the implementation block
-(id)init;
-(MPSectionedIdentifierListItemEntry *)rootEntry;
-(void)setRootEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(NSMutableSet *)clonedEntries;
-(void)setClonedEntries:(NSMutableSet *)arg1 ;
@end

