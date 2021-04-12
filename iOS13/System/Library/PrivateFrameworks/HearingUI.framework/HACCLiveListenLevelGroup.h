/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface HACCLiveListenLevelGroup : UIView {

	NSMutableArray* _levels;

}

@property (nonatomic,retain) NSMutableArray * levels;              //@synthesize levels=_levels - In the implementation block
-(NSMutableArray *)levels;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)updateLevel:(double)arg1 ;
@end

