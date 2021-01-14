/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIView *)todayView;
-(void)setNavigationView:(UIView *)arg1 ;
-(void)_adjustContentForEdgeBounce;
-(void)_resetContentAfterEdgeBounce;
-(void)layoutSubviews;
-(BOOL)isBouncing;
-(void)setBouncing:(BOOL)arg1 ;
-(UIView *)navigationView;
-(void)setTodayView:(UIView *)arg1 ;
@end

