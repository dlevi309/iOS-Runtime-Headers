/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)hidden;
-(TopoID)timestamp;
-(id)initWithArchive:(const Command*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 ;
-(unsigned)saveToArchive:(Command*)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 ;
-(id)description;
-(ICDrawingCommandData *)data;
-(unsigned long long)hash;
-(id)initWithCommand:(id)arg1 hidden:(BOOL)arg2 timestamp:(TopoID)arg3 ;
-(BOOL)isEqualDrawingCommand:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

