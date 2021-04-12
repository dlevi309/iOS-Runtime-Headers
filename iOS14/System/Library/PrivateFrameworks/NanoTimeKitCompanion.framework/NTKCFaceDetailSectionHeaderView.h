/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)_updateLabelFonts;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)title;
-(void)_fontSizeDidChange;
-(id)_traitCollectionAdjustedIfNeeded;
@end

