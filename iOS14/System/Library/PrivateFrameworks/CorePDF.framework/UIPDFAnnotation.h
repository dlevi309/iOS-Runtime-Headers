/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSString, UIPDFAnnotationView, UIPDFAnnotationController, NSMutableArray, CALayer, UIPDFSelection, UIPDFPopupAnnotation, UIPDFPage;

@interface UIPDFAnnotation : NSObject {

	CGPDFDictionaryRef _dictionary;
	CGColorRef _color;
	void* _appearanceStream;
	CGPDFStringRef _pdfContents;
	NSString* _annotationID;
	BOOL _hidden;
	UIPDFAnnotationView* _annotationView;
	UIPDFAnnotationController* _annotationController;
	NSMutableArray* _quadPoints;
	CALayer* _drawingLayer;
	UIPDFSelection* _selection;
	BOOL editable;
	id data;
	NSString* _contents;
	long long _index;
	UIPDFPopupAnnotation* _popup;
	NSString* _associatedAnnotationID;
	UIPDFPage* _page;
	unsigned long long _tag;

}

@property (nonatomic,retain) CALayer * drawingLayer;                                        //@synthesize drawingLayer=_drawingLayer - In the implementation block
@property (nonatomic,retain) UIPDFAnnotationView * annotationView;                          //@synthesize annotationView=_annotationView - In the implementation block
@property (assign,nonatomic) UIPDFPage * page;                                              //@synthesize page=_page - In the implementation block
@property (assign,nonatomic) UIPDFAnnotationController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
@property (nonatomic,readonly) BOOL recognizeGestures; 
@property (assign,nonatomic) BOOL editable; 
@property (assign,nonatomic) UIPDFSelection * selection; 
@property (nonatomic,retain) id data; 
@property (nonatomic,retain) NSString * contents;                                           //@synthesize contents=_contents - In the implementation block
@property (assign,nonatomic) long long index;                                               //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) UIPDFPopupAnnotation * popup;                                  //@synthesize popup=_popup - In the implementation block
@property (nonatomic,retain) NSString * associatedAnnotationID;                             //@synthesize associatedAnnotationID=_associatedAnnotationID - In the implementation block
@property (assign,nonatomic) unsigned long long tag;                                        //@synthesize tag=_tag - In the implementation block
+(id)newAnnotationWithPage:(id)arg1 fromArchive:(id)arg2 ;
-(NSString *)contents;
-(CGRect)Rect;
-(CGRect)bounds;
-(long long)index;
-(void)setPage:(UIPDFPage *)arg1 ;
-(UIPDFPage *)page;
-(BOOL)hidden;
-(id)init;
-(void)setTag:(unsigned long long)arg1 ;
-(void)setAnnotationController:(UIPDFAnnotationController *)arg1 ;
-(UIPDFAnnotationView *)annotationView;
-(void)setSelection:(UIPDFSelection *)arg1 ;
-(id)archive;
-(CGColorRef)color;
-(void)setIndex:(long long)arg1 ;
-(UIPDFPopupAnnotation *)popup;
-(CGRect)frame;
-(unsigned long long)tag;
-(void)setData:(id)arg1 ;
-(BOOL)editable;
-(Class)viewClass;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setAnnotationView:(UIPDFAnnotationView *)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(UIPDFSelection *)selection;
-(id)data;
-(CALayer *)drawingLayer;
-(void)setEditable:(BOOL)arg1 ;
-(void)setContents:(NSString *)arg1 ;
-(UIPDFAnnotationController *)annotationController;
-(int)annotationType;
-(void)drawInContext:(CGContextRef)arg1 ;
-(CGRect)rectIn:(CGPDFArrayRef)arg1 ;
-(void)dealloc;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(void)setPopup:(UIPDFPopupAnnotation *)arg1 ;
-(void)setPageView:(id)arg1 ;
-(void)setAnnotationID:(id)arg1 ;
-(void)setAssociatedAnnotationID:(NSString *)arg1 ;
-(void)setDrawingLayer:(CALayer *)arg1 ;
-(id)newSelection;
-(id)annotationID;
-(void)makeQuadpointsFrom:(id)arg1 ;
-(id)initWithAnnotationDictionary:(CGPDFDictionaryRef)arg1 ;
-(id)getImageNamed:(id)arg1 ofType:(id)arg2 ;
-(BOOL)hasPopUp;
-(const char*)pdfContents;
-(CGRect)popUpAnnotationRect;
-(id)descriptionHOLD;
-(NSString *)associatedAnnotationID;
-(CGPathRef)newPathFromQuadPoints;
-(BOOL)recognizeGestures;
@end

