/*
* Generated on Thursday, January 14, 2021 at 2:22:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSnappingController.h>

@class UISelectionFeedbackGenerator;

@interface PXUISnappingController : PXSnappingController {

	UISelectionFeedbackGenerator* __selectionBehavior;

}

@property (setter=_setSelectionBehavior:,nonatomic,retain) UISelectionFeedbackGenerator * _selectionBehavior;              //@synthesize _selectionBehavior=__selectionBehavior - In the implementation block
-(UISelectionFeedbackGenerator *)_selectionBehavior;
-(void)_setSelectionBehavior:(id)arg1 ;
-(void)interactionBegan;
-(id)initWithSnappingTarget:(double)arg1 ;
-(void)didSnapByAttraction;
@end

