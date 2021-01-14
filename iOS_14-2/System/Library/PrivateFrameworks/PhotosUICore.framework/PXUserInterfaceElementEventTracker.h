/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXUserInterfaceElementEventTracker.h>
@class NSMutableDictionary;


@protocol PXUserInterfaceElementEventTracker
@property (nonatomic,copy) NSMutableDictionary * payload; 
@required
-(void)setPayload:(id)arg1;
-(NSMutableDictionary *)payload;

@end


@class NSMutableDictionary, PXUpdater;

@interface PXUserInterfaceElementEventTracker : PXObservable <PXUserInterfaceElementEventTracker> {

	BOOL _isVisible;
	BOOL _hasAppeared;
	BOOL _isAppActive;
	NSMutableDictionary* _payload;
	PXUpdater* _updater;

}

@property (assign,nonatomic) BOOL hasAppeared;                         //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (assign,nonatomic) BOOL isAppActive;                         //@synthesize isAppActive=_isAppActive - In the implementation block
@property (nonatomic,readonly) BOOL isVisible;                         //@synthesize isVisible=_isVisible - In the implementation block
@property (nonatomic,readonly) double currentTimestamp; 
@property (nonatomic,readonly) PXUpdater * updater;                    //@synthesize updater=_updater - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)setPayload:(NSMutableDictionary *)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)didAppear;
-(BOOL)hasAppeared;
-(id)init;
-(id)finalPayloadWithPayload:(id)arg1 ;
-(double)timeIntervalSinceTimestamp:(double)arg1 ;
-(void)didPerformChanges;
-(NSMutableDictionary *)payload;
-(void)setHasAppeared:(BOOL)arg1 ;
-(PXUpdater *)updater;
-(BOOL)isVisible;
-(void)didDisappear;
-(void)_updateIsVisible;
-(void)_setNeedsUpdate;
-(double)currentTimestamp;
-(void)setIsVisible:(BOOL)arg1 ;
-(void)setIsAppActive:(BOOL)arg1 ;
-(BOOL)isAppActive;
-(double)timeIntervalBetweenTimestamp:(double)arg1 andTimestamp:(double)arg2 ;
-(void)_invalidateIsVisible;
@end

