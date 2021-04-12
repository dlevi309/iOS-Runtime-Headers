/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKContainerViewLayoutDelegate;
@interface NTKContainerView : UIView {

	SCD_Struct_NT26 _delegateRespondsTo;
	id<NTKContainerViewLayoutDelegate> _layoutDelegate;

}

@property (assign,nonatomic,__weak) id<NTKContainerViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setLayoutDelegate:(id<NTKContainerViewLayoutDelegate>)arg1 ;
-(id<NTKContainerViewLayoutDelegate>)layoutDelegate;
@end

