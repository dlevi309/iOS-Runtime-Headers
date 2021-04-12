/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPSectionedIdentifierListEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@class NSString, MPSectionedIdentifierListHeadEntry;

@interface MPSectionedIdentifierListTailEntry : MPSectionedIdentifierListEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	MPSectionedIdentifierListHeadEntry* _sectionHeadEntry;

}

@property (assign,nonatomic,__weak) MPSectionedIdentifierListHeadEntry * sectionHeadEntry;              //@synthesize sectionHeadEntry=_sectionHeadEntry - In the implementation block
@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tailEntryWithSectionHeadEntry:(id)arg1 ;
-(MPSectionedIdentifierListHeadEntry *)sectionHeadEntry;
-(void)setSectionHeadEntry:(MPSectionedIdentifierListHeadEntry *)arg1 ;
-(long long)entryType;
-(id)previousEntry;
@end

