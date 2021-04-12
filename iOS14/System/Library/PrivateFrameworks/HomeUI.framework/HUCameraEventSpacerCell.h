/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@interface HUCameraEventSpacerCell : UICollectionViewCell {

	BOOL _spansMultipleDays;
	BOOL _needsFullDashedLineWidth;

}

@property (assign,nonatomic) BOOL spansMultipleDays;                     //@synthesize spansMultipleDays=_spansMultipleDays - In the implementation block
@property (assign,nonatomic) BOOL needsFullDashedLineWidth;              //@synthesize needsFullDashedLineWidth=_needsFullDashedLineWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)updateWithRecordingEvent:(id)arg1 previousEvent:(id)arg2 spanningMultipleDays:(BOOL)arg3 ;
-(BOOL)needsFullDashedLineWidth;
-(void)setNeedsFullDashedLineWidth:(BOOL)arg1 ;
-(BOOL)spansMultipleDays;
-(void)setSpansMultipleDays:(BOOL)arg1 ;
@end

