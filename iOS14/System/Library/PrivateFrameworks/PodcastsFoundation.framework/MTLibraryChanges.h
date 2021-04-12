/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying> {

	NSMutableDictionary* _changesByEntityName;

}

@property (nonatomic,retain) NSMutableDictionary * changesByEntityName;              //@synthesize changesByEntityName=_changesByEntityName - In the implementation block
-(BOOL)hasInserts;
-(id)init;
-(id)description;
-(BOOL)hasDeletes;
-(BOOL)hasChanges;
-(void)removeAllChanges;
-(id)entityNames;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasUpdates;
-(void)addChangeWith:(id)arg1 entityName:(id)arg2 changeType:(int)arg3 ;
-(void)combineChanges:(id)arg1 ;
-(NSMutableDictionary *)changesByEntityName;
-(void)setChangesByEntityName:(NSMutableDictionary *)arg1 ;
-(id)changesForEntityName:(id)arg1 ;
-(BOOL)hasChangesForEntityNames:(id)arg1 ;
-(BOOL)hasInsertsForEntityNames:(id)arg1 ;
-(BOOL)hasDeletesForEntityNames:(id)arg1 ;
-(BOOL)hasUpdatesForEntityNames:(id)arg1 ;
@end

