/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/

#import <ScreenTimeSettingsUI/ScreenTimeSettingsUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray;

@interface STCandyBarView : UIView {

	BOOL _useVibrancy;
	NSArray* _usageItems;
	NSArray* _viewItems;

}

@property (readonly) BOOL useVibrancy;                        //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (nonatomic,copy) NSArray * viewItems;               //@synthesize viewItems=_viewItems - In the implementation block
@property (nonatomic,copy) NSArray * usageItems;              //@synthesize usageItems=_usageItems - In the implementation block
-(id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3 ;
-(CGSize)intrinsicContentSize;
-(void)updateSectionViewImages;
-(void)setUsageItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setViewItems:(NSArray *)arg1 ;
-(NSArray *)usageItems;
-(BOOL)useVibrancy;
-(void)layoutSubviews;
-(void)updateConstraints;
-(void)setUsageItems:(NSArray *)arg1 ;
-(id)initWithVibrancy:(BOOL)arg1 ;
-(NSArray *)viewItems;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

