/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <NotesShared/NotesShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSUUID, TTVectorMultiTimestamp, NSDate, NSOrderedSet;

@interface ICDrawing : NSObject <NSCopying> {

	NSMutableOrderedSet* _commands;
	NSMutableOrderedSet* _visibleCommands;
	long long _orientation;
	CGRect _unrotatedBoundsInCommandSpace;
	CGRect _commandBounds;
	NSUUID* _replicaUUID;
	TTVectorMultiTimestamp* _timestamp;
	NSDate* _orientationTimestamp;
	CGSize _unrotatedSize;

}

@property (nonatomic,retain) TTVectorMultiTimestamp * timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSDate * orientationTimestamp;                     //@synthesize orientationTimestamp=_orientationTimestamp - In the implementation block
@property (nonatomic,readonly) NSUUID * replicaUUID;                            //@synthesize replicaUUID=_replicaUUID - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * commands;                         //@synthesize commands=_commands - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * visibleCommands; 
@property (assign,nonatomic) long long orientation; 
@property (assign,nonatomic) CGSize unrotatedSize;                              //@synthesize unrotatedSize=_unrotatedSize - In the implementation block
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) BOOL canChangeTransientOrientation; 
@property (nonatomic,readonly) CGRect bounds; 
@property (assign,nonatomic) CGRect unrotatedBoundsInCommandSpace;              //@synthesize unrotatedBoundsInCommandSpace=_unrotatedBoundsInCommandSpace - In the implementation block
@property (nonatomic,readonly) CGRect fullBounds; 
+(CGSize)defaultSize;
+(CGSize)defaultPixelSize;
+(void)sortCommands:(id)arg1 ;
+(CGSize)fullSize:(CGSize)arg1 forOrientation:(long long)arg2 ;
+(CGAffineTransform)orientationTransform:(long long)arg1 size:(CGSize)arg2 ;
+(CGAffineTransform)defaultSizeOrientationTransform:(long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TTVectorMultiTimestamp *)timestamp;
-(long long)orientation;
-(void)setTimestamp:(TTVectorMultiTimestamp *)arg1 ;
-(CGRect)bounds;
-(void)setOrientation:(long long)arg1 ;
-(long long)imageOrientation;
-(NSOrderedSet *)commands;
-(NSUUID *)replicaUUID;
-(id)initWithReplicaID:(id)arg1 ;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(unsigned long long)mergeWithDrawing:(id)arg1 ;
-(id)initWithDrawing:(id)arg1 ;
-(unsigned)saveToArchive:(Drawing*)arg1 withPathData:(BOOL)arg2 ;
-(CGAffineTransform)orientationTransform;
-(CGSize)fullSize;
-(NSOrderedSet *)visibleCommands;
-(id)initWithData:(id)arg1 version:(unsigned)arg2 andReplicaID:(id)arg3 ;
-(id)serializeWithPathData:(BOOL)arg1 toVersion:(unsigned*)arg2 ;
-(NSDate *)orientationTimestamp;
-(CGRect)unrotatedBoundsInCommandSpace;
-(CGRect)commandBounds;
-(CGSize)unrotatedSize;
-(CGRect)calculateCommandBounds;
-(void)setOrientationTimestamp:(NSDate *)arg1 ;
-(BOOL)canChangeTransientOrientation;
-(void)setCommandIDForInsertion:(id)arg1 ;
-(id)visibleCommandForInsertingCommand:(id)arg1 ;
-(void)addNewCommand:(id)arg1 ;
-(ICDrawingCommandID)commandIDForNewCommand;
-(void)invalidateBounds;
-(void)setUnrotatedBoundsInCommandSpace:(CGRect)arg1 ;
-(void)sortCommands;
-(id)initWithCommands:(id)arg1 fromDrawing:(id)arg2 ;
-(id)mutableCommands;
-(void)takeOrientationFrom:(id)arg1 ;
-(BOOL)setTransientOrientation:(long long)arg1 ;
-(id)insertNewTestCommand;
-(id)setCommand:(id)arg1 hidden:(BOOL)arg2 ;
-(CGRect)fullBounds;
-(void)setUnrotatedSize:(CGSize)arg1 ;
-(id)initWithArchive:(const Drawing*)arg1 version:(unsigned)arg2 andReplicaID:(id)arg3 ;
-(id)serializeWithPathData:(BOOL)arg1 ;
@end

