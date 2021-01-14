/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@protocol NTKContainerViewLayoutDelegate;
@interface NTKContainerView : UIView {

	SCD_Struct_NT29 _delegateRespondsTo;
	id<NTKContainerViewLayoutDelegate> _layoutDelegate;

}

@property (assign,nonatomic,__weak) id<NTKContainerViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
-(id<NTKContainerViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<NTKContainerViewLayoutDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
@end

