/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@class NSString, MPSectionedIdentifierListHeadEntry;

@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	MPSectionedIdentifierListHeadEntry* _sectionHeadEntry;

}

@property (assign,nonatomic,__weak) MPSectionedIdentifierListHeadEntry * sectionHeadEntry;              //@synthesize sectionHeadEntry=_sectionHeadEntry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (nonatomic,readonly) NSString * sectionIdentifier; 
+(id)tailEntryWithSectionHeadEntry:(id)arg1 ;
-(long long)entryType;
-(id)previousEntry;
-(MPSectionedIdentifierListHeadEntry *)sectionHeadEntry;
-(void)setSectionHeadEntry:(MPSectionedIdentifierListHeadEntry *)arg1 ;
@end

