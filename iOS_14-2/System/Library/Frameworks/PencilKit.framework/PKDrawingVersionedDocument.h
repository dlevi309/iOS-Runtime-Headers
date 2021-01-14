/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDrawing:(id)arg1 ;
-(unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1 ;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(BOOL)loadUnzippedData:(id)arg1 ;
-(BOOL)loadNonInkingStrokes;
-(void)setLoadNonInkingStrokes:(BOOL)arg1 ;
@end

