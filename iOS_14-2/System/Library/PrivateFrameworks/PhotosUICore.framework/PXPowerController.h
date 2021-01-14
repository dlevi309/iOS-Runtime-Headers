/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, BKSProcessAssertion;

@interface PXPowerController : NSObject {

	AI _assertionIdentifierGenerator;
	BOOL _backgrounded;
	unsigned _assertionID;
	NSMutableDictionary* _assertionReasonsByIdentifier;
	NSObject*<OS_dispatch_queue> _powerControllerQueue;
	BKSProcessAssertion* _backgroundProcessAssertion;
	double _powerAssertionStartTime;

}

@property (nonatomic,readonly) NSMutableDictionary * assertionReasonsByIdentifier;              //@synthesize assertionReasonsByIdentifier=_assertionReasonsByIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> powerControllerQueue;               //@synthesize powerControllerQueue=_powerControllerQueue - In the implementation block
@property (nonatomic,retain) BKSProcessAssertion * backgroundProcessAssertion;                  //@synthesize backgroundProcessAssertion=_backgroundProcessAssertion - In the implementation block
@property (assign,nonatomic) unsigned assertionID;                                              //@synthesize assertionID=_assertionID - In the implementation block
@property (assign,nonatomic) double powerAssertionStartTime;                                    //@synthesize powerAssertionStartTime=_powerAssertionStartTime - In the implementation block
@property (assign,getter=isBackgrounded,nonatomic) BOOL backgrounded;                           //@synthesize backgrounded=_backgrounded - In the implementation block
@property (nonatomic,readonly) BOOL hasPowerAssertion; 
@property (nonatomic,readonly) BOOL hasBackgroundAssertion; 
+(id)sharedController;
-(void)applicationWillResignActive:(id)arg1 ;
-(id)init;
-(void)takePowerAssertion;
-(void)takePowerAssertionIfNeeded;
-(void)releasePowerAssertionIfNeeded;
-(BOOL)hasPowerAssertion;
-(void)handleEnteringForeground;
-(void)handleEnteringBackground;
-(void)invalidateBackgroundAssertionIfNeeded;
-(void)acquireBackgroundAssertionIfNeeded;
-(void)invalidateBackgroundAssertion;
-(void)acquireBackgroundAssertion;
-(BOOL)hasBackgroundAssertion;
-(NSMutableDictionary *)assertionReasonsByIdentifier;
-(NSObject*<OS_dispatch_queue>)powerControllerQueue;
-(BKSProcessAssertion *)backgroundProcessAssertion;
-(double)powerAssertionStartTime;
-(void)setBackgroundProcessAssertion:(BKSProcessAssertion *)arg1 ;
-(void)setPowerAssertionStartTime:(double)arg1 ;
-(void)setAssertionID:(unsigned)arg1 ;
-(void)releasePowerAssertion;
-(id)description;
-(BOOL)isBackgrounded;
-(unsigned)assertionID;
-(void)setBackgrounded:(BOOL)arg1 ;
-(unsigned)generateAssertionIdentifier;
-(void)removePowerAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(void)addPowerAssertionForIdentifier:(unsigned)arg1 withReason:(unsigned)arg2 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)dealloc;
@end

