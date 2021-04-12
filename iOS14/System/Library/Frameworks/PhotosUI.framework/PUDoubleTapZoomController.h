/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUDoubleTapZoomControllerDelegate;
@class UITapGestureRecognizer, NSString;

@interface PUDoubleTapZoomController : NSObject <UIGestureRecognizerDelegate> {

	struct {
		BOOL respondsToViewHostingGestureRecognizers;
		BOOL respondsToTilingView;
		BOOL respondsToDelegateForGestureRecognizer;
		BOOL respondsToCanDoubleTapBeginAtLocationFromProvider;
	}  _delegateFlags;
	BOOL __needsUpdateGestureRecognizers;
	id<PUDoubleTapZoomControllerDelegate> _delegate;
	UITapGestureRecognizer* __doubleTapGestureRecognizer;

}

@property (assign,setter=_setNeedsUpdateGestureRecognizers:,nonatomic) BOOL _needsUpdateGestureRecognizers;                            //@synthesize _needsUpdateGestureRecognizers=__needsUpdateGestureRecognizers - In the implementation block
@property (setter=_setDoubleTapGestureRecognizer:,nonatomic,retain) UITapGestureRecognizer * _doubleTapGestureRecognizer;              //@synthesize _doubleTapGestureRecognizer=__doubleTapGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<PUDoubleTapZoomControllerDelegate> delegate;                                                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_userTransformViewAtLocationFromProvider:(id)arg1 ;
-(id)init;
-(id<PUDoubleTapZoomControllerDelegate>)delegate;
-(void)setDelegate:(id<PUDoubleTapZoomControllerDelegate>)arg1 ;
-(void)_handleDoubleTapGestureRecognizer:(id)arg1 ;
-(void)_setDoubleTapGestureRecognizer:(id)arg1 ;
-(BOOL)shouldDoubleTapBeginAtLocationFromProvider:(id)arg1 ;
-(void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1 ;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(void)_invalidateGestureRecognizers;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UITapGestureRecognizer *)_doubleTapGestureRecognizer;
-(void)_updateGestureRecognizersIfNeeded;
-(void)invalidateViewHostingGestureRecognizers;
-(BOOL)_needsUpdateGestureRecognizers;
@end

