/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


#import <NotesShared/NotesShared-Structs.h>
@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject {

	BOOL _hidden;
	ICDrawingCommandData* _data;
	TopoID _timestamp;

}

@property (nonatomic,readonly) ICDrawingCommandData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) TopoID timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(ICDrawingCommandData *)data;
-(TopoID)timestamp;
-(BOOL)hidden;
-(id)initWithCommand:(id)arg1 hidden:(BOOL)arg2 timestamp:(TopoID)arg3 ;
-(id)initWithArchive:(const Command*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 ;
-(unsigned)saveToArchive:(Command*)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 ;
-(BOOL)isEqualDrawingCommand:(id)arg1 ;
@end

