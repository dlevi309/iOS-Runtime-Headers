/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>

@class NSArray, NSOrderedSet, NSSet, PKStroke, PKStrokeSelectionImage, PKDrawing, NSString;

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting> {

	NSOrderedSet* _strokes;
	NSSet* _strokeIdentifiers;
	PKStroke* _lassoStroke;
	PKStrokeSelectionImage* _strokeImage;
	PKDrawing* _drawing;

}

@property (nonatomic,readonly) NSOrderedSet * strokes;                                             //@synthesize strokes=_strokes - In the implementation block
@property (nonatomic,readonly) NSSet * strokeIdentifiers;                                          //@synthesize strokeIdentifiers=_strokeIdentifiers - In the implementation block
@property (nonatomic,readonly) PKStroke * lassoStroke;                                             //@synthesize lassoStroke=_lassoStroke - In the implementation block
@property (nonatomic,copy) PKStrokeSelectionImage * strokeImage;                                   //@synthesize strokeImage=_strokeImage - In the implementation block
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
-(CGRect)bounds;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(NSOrderedSet *)strokes;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(void)setStrokeImage:(PKStrokeSelectionImage *)arg1 ;
-(PKStrokeSelectionImage *)strokeImage;
-(PKDrawing *)drawing;
-(NSSet *)strokeIdentifiers;
-(CGRect)boundsWithoutLasso;
-(BOOL)containsBitmapData;
-(id)strokeDataForSelection;
-(id)legacyStrokeDataForSelection;
-(void)generateImageWithConfig:(id)arg1 fullSizeConfig:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_newDrawingWithStrokes;
-(id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3 ;
-(id)imageDataForSelection;
-(PKStroke *)lassoStroke;
@end

