/*
* Generated on Monday, March 1, 2021 at 2:35:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class UIView;

@interface AXPlatterContentMockElement : UIAccessibilityElement {

	id _sourceElement;
	UIView* _sourceView;

}

@property (nonatomic,retain) id sourceElement;                 //@synthesize sourceElement=_sourceElement - In the implementation block
@property (nonatomic,retain) UIView * sourceView;              //@synthesize sourceView=_sourceView - In the implementation block
-(id)description;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(BOOL)accessibilityRespondsToUserInteraction;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(id)sourceElement;
-(void)setSourceElement:(id)arg1 ;
@end

