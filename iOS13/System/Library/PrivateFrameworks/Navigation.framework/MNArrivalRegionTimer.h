/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@protocol MNArrivalRegionTimerDelegate;
@class GEOArrivalRegion, NSTimer;

@interface MNArrivalRegionTimer : NSObject {

	GEOArrivalRegion* _arrivalRegion;
	NSTimer* _timer;
	id<MNArrivalRegionTimerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNArrivalRegionTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<MNArrivalRegionTimerDelegate>)delegate;
-(void)setDelegate:(id<MNArrivalRegionTimerDelegate>)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(id)initWithArrivalRegion:(id)arg1 ;
@end

