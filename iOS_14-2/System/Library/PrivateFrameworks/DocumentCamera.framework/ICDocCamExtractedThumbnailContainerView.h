/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIView.h>

@protocol ICDocCamExtractedThumbnailContainerViewDelegate;
@interface ICDocCamExtractedThumbnailContainerView : UIView {

	id<ICDocCamExtractedThumbnailContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICDocCamExtractedThumbnailContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id<ICDocCamExtractedThumbnailContainerViewDelegate>)delegate;
-(id)accessibilityElements;
-(unsigned long long)accessibilityTraits;
-(void)setDelegate:(id<ICDocCamExtractedThumbnailContainerViewDelegate>)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityCustomActions;
-(id)accessibilityHint;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)orderNextForAccessibility:(id)arg1 ;
-(BOOL)orderPreviousForAccessibility:(id)arg1 ;
@end

