/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSPointsOfInterestPickerCell.h>

@class NSString, UILabel;

@interface CPSPointsOfInterestPickerExtendedCell : CPSPointsOfInterestPickerCell {

	NSString* _title;
	NSString* _subtitle;
	NSString* _text;
	UILabel* _extendedTitleLabel;
	UILabel* _extendedSubtitleLabel;
	UILabel* _extendedInformativeLabel;

}

@property (nonatomic,retain) UILabel * extendedTitleLabel;                    //@synthesize extendedTitleLabel=_extendedTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * extendedSubtitleLabel;                 //@synthesize extendedSubtitleLabel=_extendedSubtitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * extendedInformativeLabel;              //@synthesize extendedInformativeLabel=_extendedInformativeLabel - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * text;                                 //@synthesize text=_text - In the implementation block
+(id)identifier;
-(UIEdgeInsets)safeAreaInsets;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setupViews;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)extendedTitleLabel;
-(UILabel *)extendedSubtitleLabel;
-(UILabel *)extendedInformativeLabel;
-(void)setExtendedTitleLabel:(UILabel *)arg1 ;
-(void)setExtendedSubtitleLabel:(UILabel *)arg1 ;
-(void)setExtendedInformativeLabel:(UILabel *)arg1 ;
@end

