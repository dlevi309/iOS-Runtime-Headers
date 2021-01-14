/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setIgnoresTouches:(BOOL)arg1 ;
-(BOOL)ignoresTouches;
@end

