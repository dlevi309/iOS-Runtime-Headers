/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSArray;

@interface PXPeopleNamePickerCell : UITableViewCell {

	UILabel* _titleLabel;
	NSArray* _baseConstraints;

}

@property (nonatomic,retain) NSArray * baseConstraints;                  //@synthesize baseConstraints=_baseConstraints - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(NSArray *)baseConstraints;
-(void)setBaseConstraints:(NSArray *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

