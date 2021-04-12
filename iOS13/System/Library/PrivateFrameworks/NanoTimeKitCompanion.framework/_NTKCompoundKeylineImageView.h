/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/_NTKKeylineImageView.h>
#import <libobjc.A.dylib/NTKKeylineView.h>

@protocol NTKKeylineView;
@class UIView, NSString, UIColor, NTKKeylineTouchable;

@interface _NTKCompoundKeylineImageView : _NTKKeylineImageView <NTKKeylineView> {

	UIView*<NTKKeylineView> _secondaryKeylineView;

}

@property (nonatomic,retain) UIView*<NTKKeylineView> secondaryKeylineView;              //@synthesize secondaryKeylineView=_secondaryKeylineView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor; 
@property (nonatomic,readonly) UIColor * contentColor; 
@property (nonatomic,retain) NTKKeylineTouchable * touchable; 
+(id)keylineWithImage:(id)arg1 secondaryKeylineView:(id)arg2 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(void)setSecondaryKeylineView:(UIView*<NTKKeylineView>)arg1 ;
-(UIView*<NTKKeylineView>)secondaryKeylineView;
@end

