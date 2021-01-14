/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXVerticalSwipeGestureRecognizerHelperDelegate;
#import <PhotosUICore/PhotosUICore-Structs.h>
@class NSMapTable;

@interface PXVerticalSwipeGestureRecognizerHelper : NSObject {

	SCD_Struct_PX38 _delegateRespondsTo;
	BOOL _allowSwipeUp;
	BOOL _allowSwipeDown;
	id<PXVerticalSwipeGestureRecognizerHelperDelegate> _delegate;
	NSMapTable* _dependentScrollViews;

}

@property (nonatomic,readonly) NSMapTable * dependentScrollViews;                                             //@synthesize dependentScrollViews=_dependentScrollViews - In the implementation block
@property (assign,nonatomic,__weak) id<PXVerticalSwipeGestureRecognizerHelperDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowSwipeUp;                                                               //@synthesize allowSwipeUp=_allowSwipeUp - In the implementation block
@property (assign,nonatomic) BOOL allowSwipeDown;                                                             //@synthesize allowSwipeDown=_allowSwipeDown - In the implementation block
-(id)init;
-(id<PXVerticalSwipeGestureRecognizerHelperDelegate>)delegate;
-(id)_panGestureRecognizerForVerticalSwipeGestureRecognizer:(id)arg1 ;
-(void)setDelegate:(id<PXVerticalSwipeGestureRecognizerHelperDelegate>)arg1 ;
-(void)setAllowSwipeDown:(BOOL)arg1 ;
-(BOOL)allowSwipeUp;
-(BOOL)verticalSwipeGestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(NSMapTable *)dependentScrollViews;
-(BOOL)verticalSwipeGestureRecognizerShouldBegin:(id)arg1 ;
-(void)setAllowSwipeUp:(BOOL)arg1 ;
-(BOOL)allowSwipeDown;
@end

