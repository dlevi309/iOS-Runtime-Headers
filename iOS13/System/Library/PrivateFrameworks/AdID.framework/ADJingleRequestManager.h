/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/

#import <AdCore/ADSingleton.h>

@class NSMutableDictionary;

@interface ADJingleRequestManager : ADSingleton {

	BOOL _jingleRequestInProgress;
	NSMutableDictionary* _pendingJingleRequests;

}

@property (assign) BOOL jingleRequestInProgress;                                       //@synthesize jingleRequestInProgress=_jingleRequestInProgress - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingJingleRequests;              //@synthesize pendingJingleRequests=_pendingJingleRequests - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)authenticateUser:(/*^block*/id)arg1 ;
-(id)makeOptOutRequest:(id)arg1 status:(BOOL)arg2 timestamp:(double)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)makeSegmentRequest:(id)arg1 forceSegments:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)canMakeJingleRequest;
-(void)jingleRequestCompleted:(id)arg1 ;
-(void)startJingleRequest:(id)arg1 ;
-(BOOL)jingleRequestInProgress;
-(void)setJingleRequestInProgress:(BOOL)arg1 ;
-(NSMutableDictionary *)pendingJingleRequests;
-(void)setPendingJingleRequests:(NSMutableDictionary *)arg1 ;
@end

