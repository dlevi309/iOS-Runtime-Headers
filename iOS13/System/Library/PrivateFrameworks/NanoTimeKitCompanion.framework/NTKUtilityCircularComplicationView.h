/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NTKContainerView *)contentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setEditing:(BOOL)arg1 ;
-(void)layoutContainerView:(id)arg1 ;
-(void)_layoutContentView;
-(long long)layoutOverride;
-(void)setEditingRotationAngle:(double)arg1 ;
-(void)_updateEditingRotationAngle;
@end

