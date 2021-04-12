/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>

@class CPSAbridgableLabel, NSArray;

@interface CPSEmptyView : UIView {

	CPSAbridgableLabel* _titleLabel;
	CPSAbridgableLabel* _subtitleLabel;

}

@property (nonatomic,retain) CPSAbridgableLabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) CPSAbridgableLabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,copy) NSArray * titleVariants; 
@property (nonatomic,copy) NSArray * subtitleVariants; 
-(CPSAbridgableLabel *)titleLabel;
-(void)setSubtitleLabel:(CPSAbridgableLabel *)arg1 ;
-(void)setTitleLabel:(CPSAbridgableLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CPSAbridgableLabel *)subtitleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSArray *)titleVariants;
-(NSArray *)subtitleVariants;
-(void)_updateLabelTraits;
-(void)setTitleVariants:(NSArray *)arg1 ;
-(void)setSubtitleVariants:(NSArray *)arg1 ;
@end

