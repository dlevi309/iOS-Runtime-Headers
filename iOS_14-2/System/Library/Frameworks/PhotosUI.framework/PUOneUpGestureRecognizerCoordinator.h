/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUOneUpGestureRecognizerCoordinatorDelegate;
@class PUTouchingGestureRecognizer, UILongPressGestureRecognizer, PUBrowsingSession, PUOneUpBarsController, PUDoubleTapZoomController, PULongPressDragController, NSHashTable, NSString;

@interface PUOneUpGestureRecognizerCoordinator : NSObject <UIGestureRecognizerDelegate> {

	SCD_Struct_PU16 _delegateFlags;
	PUTouchingGestureRecognizer* _touchingGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	BOOL __needsUpdateGestureRecognizers;
	id<PUOneUpGestureRecognizerCoordinatorDelegate> _delegate;
	PUBrowsingSession* _browsingSession;
	PUOneUpBarsController* _oneUpBarsController;
	PUDoubleTapZoomController* _doubleTapZoomController;
	PULongPressDragController* _longPressDragController;
	NSHashTable* __irisGestureRecognizers;

}

@property (setter=_setIrisGestureRecognizers:,nonatomic,retain) NSHashTable * _irisGestureRecognizers;                   //@synthesize _irisGestureRecognizers=__irisGestureRecognizers - In the implementation block
@property (assign,setter=_setNeedsUpdateGestureRecognizers:,nonatomic) BOOL _needsUpdateGestureRecognizers;              //@synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers - In the implementation block
@property (assign,nonatomic,__weak) id<PUOneUpGestureRecognizerCoordinatorDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PUBrowsingSession * browsingSession;                                                        //@synthesize browsingSession=_browsingSession - In the implementation block
@property (nonatomic,retain) PUOneUpBarsController * oneUpBarsController;                                                //@synthesize oneUpBarsController=_oneUpBarsController - In the implementation block
@property (nonatomic,retain) PUDoubleTapZoomController * doubleTapZoomController;                                        //@synthesize doubleTapZoomController=_doubleTapZoomController - In the implementation block
@property (nonatomic,retain) PULongPressDragController * longPressDragController;                                        //@synthesize longPressDragController=_longPressDragController - In the implementation block
@property (nonatomic,readonly) PUTouchingGestureRecognizer * touchingGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)setDoubleTapZoomController:(PUDoubleTapZoomController *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)setOneUpBarsController:(PUOneUpBarsController *)arg1 ;
-(id<PUOneUpGestureRecognizerCoordinatorDelegate>)delegate;
-(PUBrowsingSession *)browsingSession;
-(void)setDelegate:(id<PUOneUpGestureRecognizerCoordinatorDelegate>)arg1 ;
-(void)setLongPressDragController:(PULongPressDragController *)arg1 ;
-(id)longPressGestureRecognizer;
-(PULongPressDragController *)longPressDragController;
-(PUTouchingGestureRecognizer *)touchingGestureRecognizer;
-(void)addIrisGestureRecognizer:(id)arg1 ;
-(void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1 ;
-(PUDoubleTapZoomController *)doubleTapZoomController;
-(void)_invalidateGestureRecognizers;
-(PUOneUpBarsController *)oneUpBarsController;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_setIrisGestureRecognizers:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_updateGestureRecognizersIfNeeded;
-(void)setBrowsingSession:(PUBrowsingSession *)arg1 ;
-(NSHashTable *)_irisGestureRecognizers;
-(void)invalidateViewHostingGestureRecognizers;
-(BOOL)_needsUpdateGestureRecognizers;
@end

