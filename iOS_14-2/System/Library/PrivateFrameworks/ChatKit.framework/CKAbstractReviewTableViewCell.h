/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UILabel *)sizeLabel;
-(void)setSizeLabel:(UILabel *)arg1 ;
-(unsigned long long)size;
-(void)setSize:(unsigned long long)arg1 ;
-(void)prepareForReuse;
-(void)setMainText:(NSString *)arg1 ;
-(void)setSubheadingText:(NSString *)arg1 ;
-(UILabel *)lastModifiedLabel;
-(NSString *)subheadingText;
-(void)setLastModifiedLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(NSString *)mainText;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

