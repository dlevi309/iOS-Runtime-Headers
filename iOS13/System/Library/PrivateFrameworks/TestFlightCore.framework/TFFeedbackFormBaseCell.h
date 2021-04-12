/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <TestFlightCore/TestFlightCore-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/TFFeedbackDataDisplayable.h>

@protocol TFFeedbackDataUpdateProxy;
@class UIView;

@interface TFFeedbackFormBaseCell : UITableViewCell <TFFeedbackDataDisplayable> {

	id<TFFeedbackDataUpdateProxy> _updateProxy;
	UIView* _topSeparator;
	UIView* _bottomSeparator;

}

@property (nonatomic,retain) UIView * topSeparator;                                         //@synthesize topSeparator=_topSeparator - In the implementation block
@property (nonatomic,retain) UIView * bottomSeparator;                                      //@synthesize bottomSeparator=_bottomSeparator - In the implementation block
@property (assign,nonatomic,__weak) id<TFFeedbackDataUpdateProxy> updateProxy;              //@synthesize updateProxy=_updateProxy - In the implementation block
@property (getter=isSelectable,nonatomic,readonly) BOOL selectable; 
+(CGSize)sizeForEntry:(id)arg1 dataSource:(id)arg2 fittingSize:(CGSize)arg3 inTraitEnvironment:(id)arg4 ;
-(BOOL)isSelectable;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)bottomSeparator;
-(void)setTopSeparator:(UIView *)arg1 ;
-(UIView *)topSeparator;
-(void)setBottomSeparator:(UIView *)arg1 ;
-(id<TFFeedbackDataUpdateProxy>)updateProxy;
-(CGRect)_separatorFrameForTop:(BOOL)arg1 inLayoutBounds:(CGRect)arg2 ;
-(void)_setupSeparatorViewsForAppearingInSectionLocation:(int)arg1 ;
-(id)_createSeparatorSubview;
-(unsigned long long)displayableDataType;
-(void)setDisplayedDataString:(id)arg1 ;
-(void)setDisplayedDataNumber:(id)arg1 ;
-(void)setDisplayedDataGroupInclusionBool:(BOOL)arg1 ;
-(void)setDisplayedDataImageCollection:(id)arg1 ;
-(void)applyContentsOfEntry:(id)arg1 ;
-(void)prepareSeparatorsForCellInSectionLocation:(int)arg1 ;
-(void)setUpdateProxy:(id<TFFeedbackDataUpdateProxy>)arg1 ;
@end
