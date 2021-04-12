/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPMediaArray.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPMediaLibraryResultSet, OS_dispatch_queue;
@class MPMediaLibrary, MPMediaQuerySectionInfo, NSMutableArray, NSObject, MPMediaQueryCriteria;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {

	id<MPMediaLibraryResultSet> _resultSet;
	Class _entityClass;
	MPMediaLibrary* _library;
	MPMediaQuerySectionInfo* _sectionInfo;
	NSMutableArray* _entities;
	NSObject*<OS_dispatch_queue> _entitiesQueue;
	MPMediaQueryCriteria* _queryCriteria;
	long long _revision;

}

@property (nonatomic,readonly) id<MPMediaLibraryResultSet> resultSet;              //@synthesize resultSet=_resultSet - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id<MPMediaLibraryResultSet>)resultSet;
-(id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4 ;
-(BOOL)isQueryResultSetInvalidated;
-(id)sectionInfo;
@end

