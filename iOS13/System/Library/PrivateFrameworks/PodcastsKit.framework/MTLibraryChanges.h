/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <PodcastsKit/PodcastsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface MTLibraryChanges : NSObject <NSCopying> {

	NSMutableDictionary* _changesByEntityName;

}

@property (nonatomic,retain) NSMutableDictionary * changesByEntityName;              //@synthesize changesByEntityName=_changesByEntityName - In the implementation block
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasChanges;
-(BOOL)hasInserts;
-(BOOL)hasDeletes;
-(id)entityNames;
-(BOOL)hasUpdates;
-(void)removeAllChanges;
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

