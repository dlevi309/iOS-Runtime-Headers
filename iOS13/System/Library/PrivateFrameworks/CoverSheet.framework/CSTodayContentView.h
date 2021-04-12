/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CSCoverSheetViewBase.h>

@class UIView;

@interface CSTodayContentView : CSCoverSheetViewBase {

	BOOL _bouncing;
	UIView* _navigationView;
	UIView* _todayView;

}

@property (assign,nonatomic,__weak) UIView * navigationView;               //@synthesize navigationView=_navigationView - In the implementation block
@property (assign,nonatomic,__weak) UIView * todayView;                    //@synthesize todayView=_todayView - In the implementation block
@property (assign,getter=isBouncing,nonatomic) BOOL bouncing;              //@synthesize bouncing=_bouncing - In the implementation block
-(void)layoutSubviews;
-(void)setTodayView:(UIView *)arg1 ;
-(UIView *)todayView;
-(BOOL)isBouncing;
-(void)setBouncing:(BOOL)arg1 ;
-(void)_adjustContentForEdgeBounce;
-(void)_resetContentAfterEdgeBounce;
-(UIView *)navigationView;
-(void)setNavigationView:(UIView *)arg1 ;
@end

