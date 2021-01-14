/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/


@class UIView;

@interface _HKOutsideTapCallback : NSObject {

	UIView* _view;
	/*^block*/id _outsideTapBlock;

}

@property (nonatomic,__weak,readonly) UIView * view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) id outsideTapBlock;                //@synthesize outsideTapBlock=_outsideTapBlock - In the implementation block
-(UIView *)view;
-(id)initWithView:(id)arg1 outsideTapBlock:(/*^block*/id)arg2 ;
-(id)outsideTapBlock;
@end

