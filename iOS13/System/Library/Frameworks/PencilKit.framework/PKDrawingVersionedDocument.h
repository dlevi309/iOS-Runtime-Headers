/*
* Generated on Monday, March 1, 2021 at 2:32:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PKVersionedDocument.h>

@class PKDrawing;

@interface PKDrawingVersionedDocument : PKVersionedDocument {

	BOOL _loadNonInkingStrokes;
	PKDrawing* _drawing;

}

@property (nonatomic,retain) PKDrawing * drawing;                    //@synthesize drawing=_drawing - In the implementation block
@property (assign,nonatomic) BOOL loadNonInkingStrokes;              //@synthesize loadNonInkingStrokes=_loadNonInkingStrokes - In the implementation block
+(unsigned)serializationVersion;
+(unsigned)minimumSupportedVersion;
-(void)mergeVersion:(unsigned)arg1 fromData:(id)arg2 ;
-(id)serializeCurrentVersion:(unsigned*)arg1 ;
-(PKDrawing *)drawing;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(id)initWithDrawing:(id)arg1 ;
-(BOOL)loadUnzippedData:(id)arg1 ;
-(BOOL)loadNonInkingStrokes;
-(unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1 ;
-(void)setLoadNonInkingStrokes:(BOOL)arg1 ;
@end

