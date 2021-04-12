/*
* Generated on Thursday, January 14, 2021 at 2:24:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<MNArrivalRegionTimerDelegate>)delegate;
-(void)setDelegate:(id<MNArrivalRegionTimerDelegate>)arg1 ;
-(void)updateForLocation:(id)arg1 ;
-(void)dealloc;
-(id)initWithArrivalRegion:(id)arg1 ;
@end

