/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>

@interface NTKClockIconView : UIView {

	BOOL _paused;
	double _fullDiameter;

}

@property (assign,nonatomic) double fullDiameter;              //@synthesize fullDiameter=_fullDiameter - In the implementation block
@property (assign,nonatomic) BOOL paused;                      //@synthesize paused=_paused - In the implementation block
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(id)borrowCircleView;
-(id)borrowTimeView;
-(void)restoreBorrowedViews;
-(double)fullDiameter;
-(void)setFullDiameter:(double)arg1 ;
@end

