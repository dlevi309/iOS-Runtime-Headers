/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/TestProbe.h>

@protocol AWDLPeerProbeDelegate;
@class NSMutableDictionary, NSArray;

@interface AWDLPeerProbe : TestProbe {

	id<AWDLPeerProbeDelegate> _delegate;
	unsigned long long _pollCount;
	NSMutableDictionary* _peerList;
	NSArray* _servicesOfInterest;

}

@property (nonatomic,retain) NSArray * servicesOfInterest;              //@synthesize servicesOfInterest=_servicesOfInterest - In the implementation block
@property (retain) id<AWDLPeerProbeDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long pollCount;                        //@synthesize pollCount=_pollCount - In the implementation block
@property (retain) NSMutableDictionary * peerList;                      //@synthesize peerList=_peerList - In the implementation block
-(void)dealloc;
-(id<AWDLPeerProbeDelegate>)delegate;
-(void)setDelegate:(id<AWDLPeerProbeDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)stopTest;
-(void)setPollCount:(unsigned long long)arg1 ;
-(void)setServicesOfInterest:(NSArray *)arg1 ;
-(void)periodicTimerFired:(id)arg1 ;
-(void)startAWDLPeerPollingForServices:(id)arg1 withCount:(unsigned long long)arg2 interval:(unsigned long long)arg3 ;
-(unsigned long long)pollCount;
-(NSMutableDictionary *)peerList;
-(void)setPeerList:(NSMutableDictionary *)arg1 ;
-(NSArray *)servicesOfInterest;
@end

