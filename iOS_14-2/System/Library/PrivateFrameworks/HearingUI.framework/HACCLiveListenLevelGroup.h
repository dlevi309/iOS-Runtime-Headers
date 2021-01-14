/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HearingUI.framework/HearingUI
*/

#import <HearingUI/HearingUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface HACCLiveListenLevelGroup : UIView {

	NSMutableArray* _levels;

}

@property (nonatomic,retain) NSMutableArray * levels;              //@synthesize levels=_levels - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(NSMutableArray *)levels;
-(void)layoutSubviews;
-(void)setLevels:(NSMutableArray *)arg1 ;
-(void)updateLevel:(double)arg1 ;
@end

