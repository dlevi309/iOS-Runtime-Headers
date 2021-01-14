/*
* Generated on Thursday, January 14, 2021 at 2:21:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)sectionInfo;
-(id)initWithResultSet:(id)arg1 queryCriteria:(id)arg2 entityType:(long long)arg3 library:(id)arg4 ;
-(BOOL)isQueryResultSetInvalidated;
-(id<MPMediaLibraryResultSet>)resultSet;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

