/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)makeSegmentRequest:(id)arg1 forceSegments:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)canMakeJingleRequest;
-(void)jingleRequestCompleted:(id)arg1 ;
-(void)startJingleRequest:(id)arg1 ;
-(BOOL)jingleRequestInProgress;
-(void)setJingleRequestInProgress:(BOOL)arg1 ;
-(NSMutableDictionary *)pendingJingleRequests;
-(void)setPendingJingleRequests:(NSMutableDictionary *)arg1 ;
@end

