/*
* Generated on Thursday, January 14, 2021 at 2:23:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBaseComposeHeaderField.h>

@class GKLabel;

@interface GKComposeHeaderField : GKBaseComposeHeaderField {

	GKLabel* _valueLabel;

}

@property (nonatomic,retain) GKLabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaxLineCount:(unsigned long long)arg1 ;
-(void)setValueText:(id)arg1 ;
-(CGRect)valueFrame;
-(GKLabel *)valueLabel;
-(void)setValueLabel:(GKLabel *)arg1 ;
-(void)dealloc;
-(id)valueText;
@end

