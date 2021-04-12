/*
* Generated on Monday, March 1, 2021 at 2:31:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSString;

@interface CKAbstractReviewTableViewCell : UITableViewCell {

	unsigned long long _size;
	UILabel* _nameLabel;
	UILabel* _lastModifiedLabel;
	UILabel* _sizeLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                      //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * lastModifiedLabel;              //@synthesize lastModifiedLabel=_lastModifiedLabel - In the implementation block
@property (nonatomic,retain) UILabel * sizeLabel;                      //@synthesize sizeLabel=_sizeLabel - In the implementation block
@property (nonatomic,retain) NSString * mainText; 
@property (nonatomic,retain) NSString * subheadingText; 
@property (assign,nonatomic) unsigned long long size;                  //@synthesize size=_size - In the implementation block
-(unsigned long long)size;
-(void)prepareForReuse;
-(void)setSize:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(UILabel *)sizeLabel;
-(void)setMainText:(NSString *)arg1 ;
-(void)setSubheadingText:(NSString *)arg1 ;
-(UILabel *)lastModifiedLabel;
-(NSString *)subheadingText;
-(NSString *)mainText;
-(void)setLastModifiedLabel:(UILabel *)arg1 ;
@end

