/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface AVView : UIView {

	BOOL _ignoresTouches;

}

@property (assign,nonatomic) BOOL ignoresTouches;              //@synthesize ignoresTouches=_ignoresTouches - In the implementation block
-(void)setHidden:(BOOL)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)ignoresTouches;
-(void)setIgnoresTouches:(BOOL)arg1 ;
@end

