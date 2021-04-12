/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UITextGestureCluster.h>

@interface UITextGestureClusterLinkInteract : UITextGestureCluster {

	BOOL _isTryingToHighlightLink;

}
-(id)initWithView:(id)arg1 ;
-(void)_resetForLink;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(void)cancelInteractionWithLink;
-(BOOL)cluster_gestureRecognizerShouldBegin:(id)arg1 ;
-(void)smallDelayRecognizer:(id)arg1 ;
-(void)longDelayRecognizer:(id)arg1 ;
-(void)linkTapRecognizer:(id)arg1 ;
@end

