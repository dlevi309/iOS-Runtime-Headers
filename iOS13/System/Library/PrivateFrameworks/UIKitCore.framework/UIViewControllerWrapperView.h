/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@interface UIViewControllerWrapperView : UIView {

	BOOL _tightWrappingDisabled;

}

@property (assign,nonatomic) BOOL tightWrappingDisabled;              //@synthesize tightWrappingDisabled=_tightWrappingDisabled - In the implementation block
+(id)existingWrapperViewForView:(id)arg1 ;
+(id)wrapperViewForView:(id)arg1 wrapperFrame:(CGRect)arg2 viewFrame:(CGRect)arg3 ;
+(id)wrapperViewForView:(id)arg1 frame:(CGRect)arg2 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)unwrapView;
-(void)unwrapView:(id)arg1 ;
-(void)setTightWrappingDisabled:(BOOL)arg1 ;
-(BOOL)tightWrappingDisabled;
@end

