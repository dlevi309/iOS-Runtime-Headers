/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/SBPressCollectorDelegate.h>
#import <libobjc.A.dylib/SBAWDMetricDelegate.h>

@protocol SBPressSequenceObserverDelegate;
@class NSUUID, NSString, SBPressCollector;

@interface SBPressSequenceObserver : NSObject <SBPressCollectorDelegate, SBAWDMetricDelegate> {

	NSUUID* _sosTriggerUUID;
	NSString* _pressName;
	SBPressCollector* _pressCollector;
	id<SBPressSequenceObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBPressSequenceObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * pressName;                                           //@synthesize pressName=_pressName - In the implementation block
@property (nonatomic,readonly) SBPressCollector * pressCollector;                              //@synthesize pressCollector=_pressCollector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<SBPressSequenceObserverDelegate>)delegate;
-(void)setDelegate:(id<SBPressSequenceObserverDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithPressName:(id)arg1 ;
-(SBPressCollector *)pressCollector;
-(void)pressCollector:(id)arg1 didCollectSequence:(id)arg2 ;
-(void)noteDidBeginSOSWithUUID:(id)arg1 ;
-(void)metricDidPost:(id)arg1 data:(id)arg2 ;
-(NSString *)pressName;
-(void)_notePowerDownImminent;
-(void)_setPressCollector:(id)arg1 ;
@end

