/*
* Generated on Thursday, January 14, 2021 at 2:29:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(void)setSourceView:(UIView *)arg1 ;
-(BOOL)accessibilityRespondsToUserInteraction;
-(UIView *)sourceView;
-(unsigned long long)accessibilityTraits;
-(id)description;
-(id)accessibilityValue;
-(CGRect)accessibilityFrame;
-(id)sourceElement;
-(void)setSourceElement:(id)arg1 ;
@end

