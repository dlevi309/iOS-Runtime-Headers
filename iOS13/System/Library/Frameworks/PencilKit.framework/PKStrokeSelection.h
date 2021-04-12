/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSMutableOrderedSet, PKStroke, UIImage, PKDrawing, NSString;

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting> {

	NSMutableOrderedSet* _strokes;
	PKStroke* _lassoStroke;
	UIImage* _strokeImage;
	PKDrawing* _drawing;

}

@property (nonatomic,readonly) NSMutableOrderedSet * strokes;                                      //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) PKStroke * lassoStroke;                                             //@synthesize lassoStroke=_lassoStroke - In the implementation block
@property (nonatomic,copy) UIImage * strokeImage;                                                  //@synthesize strokeImage=_strokeImage - In the implementation block
@property (nonatomic,readonly) PKDrawing * drawing;                                                //@synthesize drawing=_drawing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)strokeSelectionFromData:(id)arg1 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(CGRect)bounds;
-(NSMutableOrderedSet *)strokes;
-(PKDrawing *)drawing;
-(void)setStrokeImage:(UIImage *)arg1 ;
-(PKStroke *)lassoStroke;
-(UIImage *)strokeImage;
-(CGRect)boundsWithoutLasso;
-(id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3 ;
-(BOOL)containsBitmapData;
-(id)strokeDataForSelection;
-(id)legacyStrokeDataForSelection;
-(id)_newDrawingWithStrokes;
-(id)imageDataForSelection;
@end

