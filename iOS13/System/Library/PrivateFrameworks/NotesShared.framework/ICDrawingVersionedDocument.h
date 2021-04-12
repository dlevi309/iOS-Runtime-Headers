/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <ReminderKit/TTVersionedDocument.h>

@class ICDrawing;

@interface ICDrawingVersionedDocument : TTVersionedDocument {

	ICDrawing* _drawing;

}

@property (nonatomic,retain) ICDrawing * drawing;              //@synthesize drawing=_drawing - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(ICDrawing *)drawing;
-(void)setDrawing:(ICDrawing *)arg1 ;
-(unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1 ;
@end

