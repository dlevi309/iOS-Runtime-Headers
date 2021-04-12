/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UITableViewHeaderFooterView.h>

@class UILabel, NTKCSeparatorView, NSString;

@interface NTKCFaceDetailSectionHeaderView : UITableViewHeaderFooterView {

	UILabel* _detailLabel;
	NTKCSeparatorView* _bottomSeparator;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * groupName; 
+(id)reuseIdentifier;
+(double)headerHeight;
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)_updateLabelFonts;
-(void)_fontSizeDidChange;
-(id)_traitCollectionAdjustedIfNeeded;
@end

