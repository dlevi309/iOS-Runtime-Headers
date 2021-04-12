/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <UIKitCore/UIView.h>

@protocol ICDocCamExtractedThumbnailContainerViewDelegate;
@interface ICDocCamExtractedThumbnailContainerView : UIView {

	id<ICDocCamExtractedThumbnailContainerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ICDocCamExtractedThumbnailContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ICDocCamExtractedThumbnailContainerViewDelegate>)delegate;
-(void)setDelegate:(id<ICDocCamExtractedThumbnailContainerViewDelegate>)arg1 ;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)accessibilityCustomActions;
-(id)accessibilityElements;
-(BOOL)orderNextForAccessibility:(id)arg1 ;
-(BOOL)orderPreviousForAccessibility:(id)arg1 ;
@end

