/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class MPSectionedIdentifierListItemEntry, NSMutableSet;

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject {

	MPSectionedIdentifierListItemEntry* _rootEntry;
	NSMutableSet* _clonedEntries;

}

@property (nonatomic,retain) MPSectionedIdentifierListItemEntry * rootEntry;              //@synthesize rootEntry=_rootEntry - In the implementation block
@property (nonatomic,retain) NSMutableSet * clonedEntries;                                //@synthesize clonedEntries=_clonedEntries - In the implementation block
-(void)setRootEntry:(MPSectionedIdentifierListItemEntry *)arg1 ;
-(NSMutableSet *)clonedEntries;
-(void)setClonedEntries:(NSMutableSet *)arg1 ;
-(id)init;
-(MPSectionedIdentifierListItemEntry *)rootEntry;
@end

