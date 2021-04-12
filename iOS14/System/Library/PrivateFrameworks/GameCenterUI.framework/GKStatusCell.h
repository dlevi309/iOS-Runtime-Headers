/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKCollectionViewCell.h>

@class UILabel;

@interface GKStatusCell : GKCollectionViewCell {

	UILabel* _statusLabel;

}

@property (nonatomic,retain) UILabel * statusLabel;              //@synthesize statusLabel=_statusLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)canRemoveItem;
-(void)prepareForReuse;
-(UILabel *)statusLabel;
-(void)setStatus:(id)arg1 ;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)dealloc;
@end

