/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(ICDrawing *)drawing;
-(id)initWithData:(id)arg1 andReplicaID:(id)arg2 ;
-(unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1 ;
-(void)setDrawing:(ICDrawing *)arg1 ;
@end

