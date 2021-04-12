/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSWPInteractiveCanvasController.h>

@class TSDDrawableInfo, TSAAnnotationController;

@interface TSAInteractiveCanvasController : TSWPInteractiveCanvasController {

	TSDDrawableInfo* mInfoBeingDragInserted;
	BOOL _supportsAnnotations;
	TSAAnnotationController* _annotationController;

}

@property (nonatomic,retain) TSDDrawableInfo * infoBeingDragInserted; 
@property (nonatomic,readonly) BOOL wantsCanvasReferenceController; 
@property (nonatomic,readonly) BOOL supportsAnnotations;                                    //@synthesize supportsAnnotations=_supportsAnnotations - In the implementation block
@property (nonatomic,readonly) TSAAnnotationController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
-(void)dealloc;
-(void)teardown;
-(void)selectAll:(id)arg1 ;
-(TSAAnnotationController *)annotationController;
-(void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2 ;
-(id)additionalVisibleInfosForCanvas:(id)arg1 ;
-(BOOL)wantsHyperlinkGestureRecognizer;
-(TSDDrawableInfo *)infoBeingDragInserted;
-(void)loadDocument;
-(void)unloadDocument;
-(void)handleHyperlinkGesture:(id)arg1 ;
-(void)willSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)didSetDocumentToMode:(long long)arg1 fromMode:(long long)arg2 animated:(BOOL)arg3 ;
-(BOOL)hasEmptyWPSelection;
-(BOOL)requiresSimilarInfos;
-(BOOL)hasInspectableSelection;
-(id)p_activeTextRep;
-(BOOL)wantsCanvasReferenceController;
-(void)setInfoBeingDragInserted:(TSDDrawableInfo *)arg1 ;
-(BOOL)supportsAnnotations;
@end

