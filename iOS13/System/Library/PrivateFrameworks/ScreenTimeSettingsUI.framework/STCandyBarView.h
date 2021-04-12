/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)intrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(void)updateConstraints;
-(BOOL)useVibrancy;
-(void)updateSectionViewImages;
-(NSArray *)usageItems;
-(NSArray *)viewItems;
-(id)capImageWithHeight:(double)arg1 leadingLineCap:(int)arg2 trailingLineCap:(int)arg3 ;
-(void)setViewItems:(NSArray *)arg1 ;
-(void)setUsageItems:(NSArray *)arg1 ;
-(id)initWithVibrancy:(BOOL)arg1 ;
-(void)setUsageItems:(id)arg1 animated:(BOOL)arg2 ;
@end

