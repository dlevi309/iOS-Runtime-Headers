/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>

@interface NTKClockIconView : UIView {

	BOOL _paused;
	double _fullDiameter;

}

@property (assign,nonatomic) double fullDiameter;              //@synthesize fullDiameter=_fullDiameter - In the implementation block
@property (assign,nonatomic) BOOL paused;                      //@synthesize paused=_paused - In the implementation block
-(BOOL)paused;
-(void)setPaused:(BOOL)arg1 ;
-(id)borrowCircleView;
-(id)borrowTimeView;
-(void)restoreBorrowedViews;
-(double)fullDiameter;
-(void)setFullDiameter:(double)arg1 ;
@end

