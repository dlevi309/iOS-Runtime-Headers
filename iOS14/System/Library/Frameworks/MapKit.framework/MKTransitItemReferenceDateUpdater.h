/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)referenceDateAsTimeInterval;
+(id)referenceDate;
+(void)_addUpdater:(id)arg1 ;
+(void)_removeUpdater:(id)arg1 ;
+(BOOL)_needsUpdateReferenceDate;
+(void)_updateReferenceDate;
+(id)_currentTimeWithRoundedSeconds;
+(unsigned long long)_updaterCount;
+(void)_cancelReferenceDateUpdate;
+(void)_referenceDateUpdateTimerFired;
+(void)_scheduleReferenceDateUpdate;
-(void)setActive:(BOOL)arg1 ;
-(id<MKTransitItemReferenceDateUpdaterDelegate>)delegate;
-(BOOL)isActive;
-(void)setDelegate:(id<MKTransitItemReferenceDateUpdaterDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

