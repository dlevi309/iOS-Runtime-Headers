/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@protocol MKTransitItemReferenceDateUpdaterDelegate;
#import <MapKit/MapKit-Structs.h>
@interface MKTransitItemReferenceDateUpdater : NSObject {

	os_unfair_lock_s _lock;
	BOOL _active;
	id<MKTransitItemReferenceDateUpdaterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MKTransitItemReferenceDateUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                                //@synthesize active=_active - In the implementation block
+(void)initialize;
+(id)referenceDate;
+(double)referenceDateAsTimeInterval;
+(void)_addUpdater:(id)arg1 ;
+(void)_removeUpdater:(id)arg1 ;
+(BOOL)_needsUpdateReferenceDate;
+(void)_updateReferenceDate;
+(id)_currentTimeWithRoundedSeconds;
+(unsigned long long)_updaterCount;
+(void)_cancelReferenceDateUpdate;
+(void)_referenceDateUpdateTimerFired;
+(void)_scheduleReferenceDateUpdate;
-(id<MKTransitItemReferenceDateUpdaterDelegate>)delegate;
-(void)setDelegate:(id<MKTransitItemReferenceDateUpdaterDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

