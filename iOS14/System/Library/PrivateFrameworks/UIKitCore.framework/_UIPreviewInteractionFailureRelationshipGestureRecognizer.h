/*
* Generated on Thursday, January 14, 2021 at 2:20:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_gestureRecognizerFailed:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(UIPreviewInteraction *)previewInteraction;
-(void)setPreviewInteraction:(UIPreviewInteraction *)arg1 ;
-(void)setStateToFailed;
-(id)initWithPreviewInteraction:(id)arg1 ;
-(void)setStateToRecognized;
@end

