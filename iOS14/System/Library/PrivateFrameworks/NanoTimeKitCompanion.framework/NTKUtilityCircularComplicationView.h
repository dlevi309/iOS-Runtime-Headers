/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>
#import <libobjc.A.dylib/NTKContainerViewLayoutDelegate.h>

@class NTKContainerView, NSString;

@interface NTKUtilityCircularComplicationView : NTKUtilityComplicationView <NTKContainerViewLayoutDelegate> {

	NTKContainerView* _contentView;

}

@property (nonatomic,readonly) NTKContainerView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)layoutOverride;
-(void)layoutContainerView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_layoutContentView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(NTKContainerView *)contentView;
-(void)setEditingRotationAngle:(double)arg1 ;
-(void)_updateEditingRotationAngle;
@end

