/*
* Generated on Monday, March 1, 2021 at 2:30:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIGestureRecognizer.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIPreviewInteraction, NSString;

@interface _UIPreviewInteractionFailureRelationshipGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {

	UIPreviewInteraction* _previewInteraction;

}

@property (assign,nonatomic,__weak) UIPreviewInteraction * previewInteraction;              //@synthesize previewInteraction=_previewInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id)arg1 ;
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(id)initWithPreviewInteraction:(id)arg1 ;
-(void)setStateToFailed;
-(void)setStateToRecognized;
@end

