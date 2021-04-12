/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <libobjc.A.dylib/TUCallContainerPrivate.h>
#import <libobjc.A.dylib/TUCallContainer.h>
@class NSArray, TUCall;


@protocol TUCallContainer <NSObject>
@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,readonly) TUCall * incomingCall; 
@property (nonatomic,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,readonly) TUCall * activeVideoCall; 
@property (nonatomic,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned long long currentCallCount; 
@property (nonatomic,readonly) unsigned long long currentVideoCallCount; 
@property (nonatomic,readonly) unsigned long long currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned long long callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL hasCurrentCalls; 
@property (nonatomic,readonly) BOOL hasCurrentAudioCalls; 
@property (nonatomic,readonly) BOOL hasCurrentVideoCalls; 
@property (nonatomic,readonly) BOOL anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,copy,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@required
-(NSArray *)currentVideoCalls;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(BOOL)hasCurrentVideoCalls;
-(TUCall *)activeVideoCall;
-(id)callWithUniqueProxyIdentifier:(id)arg1;
-(unsigned long long)currentVideoCallCount;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(id)videoCallWithStatus:(int)arg1;
-(id)callsWithGroupUUID:(id)arg1;
-(NSArray *)currentCalls;
-(BOOL)hasCurrentCalls;
-(unsigned long long)currentAudioAndVideoCallCount;
-(NSArray *)callsWithAnEndpointElsewhere;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1;
-(id)callPassingTest:(/*^block*/id)arg1;
-(NSArray *)callsHostedElsewhere;
-(id)audioOrVideoCallWithStatus:(int)arg1;
-(id)callsPassingTest:(/*^block*/id)arg1;
-(TUCall *)incomingVideoCall;
-(TUCall *)incomingCall;
-(id)callsWithStatus:(int)arg1;
-(id)displayedCallFromCalls:(id)arg1;
-(NSArray *)currentAudioAndVideoCalls;
-(NSArray *)conferenceParticipantCalls;
-(NSArray *)displayedCalls;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(NSArray *)currentCallGroups;
-(TUCall *)currentVideoCall;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1;
-(id)callWithStatus:(int)arg1;
-(NSArray *)displayedAudioAndVideoCalls;
-(id)callWithCallUUID:(id)arg1;
-(NSArray *)currentAudioAndVideoCallGroups;
-(BOOL)hasCurrentAudioCalls;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(BOOL)allCallsAreOfService:(int)arg1;
-(unsigned long long)currentCallCount;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1;
-(NSArray *)callsOnDefaultPairedDevice;
-(NSArray *)incomingCalls;
-(id)audioAndVideoCallsWithStatus:(int)arg1;

@end


@class NSArray, TUCall, NSString;

@interface TUCallContainer : NSObject <TUCallContainerPrivate, TUCallContainer> {

	NSArray* _calls;

}

@property (nonatomic,copy) NSArray * calls;                                                    //@synthesize calls=_calls - In the implementation block
@property (nonatomic,copy,readonly) NSArray * _allCalls; 
@property (nonatomic,readonly) TUCall * displayedCall; 
@property (nonatomic,readonly) TUCall * conferenceCall; 
@property (nonatomic,readonly) TUCall * frontmostCall; 
@property (nonatomic,retain,readonly) TUCall * frontmostAudioOrVideoCall; 
@property (nonatomic,readonly) BOOL existingCallsHaveMultipleProviders; 
@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,readonly) TUCall * incomingCall; 
@property (nonatomic,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,readonly) TUCall * activeVideoCall; 
@property (nonatomic,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned long long currentCallCount; 
@property (nonatomic,readonly) unsigned long long currentVideoCallCount; 
@property (nonatomic,readonly) unsigned long long currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned long long callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL hasCurrentCalls; 
@property (nonatomic,readonly) BOOL hasCurrentAudioCalls; 
@property (nonatomic,readonly) BOOL hasCurrentVideoCalls; 
@property (nonatomic,readonly) BOOL anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) BOOL anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,copy,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)currentVideoCalls;
-(BOOL)anyCallIsHostedOnCurrentDevice;
-(TUCall *)conferenceCall;
-(BOOL)hasCurrentVideoCalls;
-(TUCall *)activeVideoCall;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(TUCall *)displayedCall;
-(TUCall *)frontmostCall;
-(unsigned long long)currentVideoCallCount;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(id)videoCallWithStatus:(int)arg1 ;
-(id)callsWithGroupUUID:(id)arg1 ;
-(NSArray *)currentCalls;
-(BOOL)hasCurrentCalls;
-(unsigned long long)currentAudioAndVideoCallCount;
-(NSArray *)callsWithAnEndpointElsewhere;
-(BOOL)anyCallPassesTest:(/*^block*/id)arg1 ;
-(id)callPassingTest:(/*^block*/id)arg1 ;
-(NSArray *)_allCalls;
-(NSArray *)callsHostedElsewhere;
-(id)audioOrVideoCallWithStatus:(int)arg1 ;
-(id)callsPassingTest:(/*^block*/id)arg1 ;
-(TUCall *)incomingVideoCall;
-(TUCall *)incomingCall;
-(id)callsWithStatus:(int)arg1 ;
-(id)displayedCallFromCalls:(id)arg1 ;
-(NSArray *)currentAudioAndVideoCalls;
-(NSArray *)conferenceParticipantCalls;
-(NSArray *)displayedCalls;
-(unsigned long long)callCountOnDefaultPairedDevice;
-(NSArray *)currentCallGroups;
-(TUCall *)currentVideoCall;
-(BOOL)allCallsPassTest:(/*^block*/id)arg1 ;
-(id)callWithStatus:(int)arg1 ;
-(id)_callGroupsFromCalls:(id)arg1 ;
-(NSArray *)displayedAudioAndVideoCalls;
-(id)callWithCallUUID:(id)arg1 ;
-(NSArray *)currentAudioAndVideoCallGroups;
-(BOOL)hasCurrentAudioCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2 ;
-(id)init;
-(id)initWithCalls:(id)arg1 ;
-(void)enumerateCallsInvokingBlock:(/*^block*/id)arg1 forCallsPassingTest:(/*^block*/id)arg2 ;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(BOOL)existingCallsHaveMultipleProviders;
-(BOOL)anyCallIsEndpointOnCurrentDevice;
-(BOOL)allCallsAreOfService:(int)arg1 ;
-(unsigned long long)currentCallCount;
-(void)setCalls:(NSArray *)arg1 ;
-(unsigned long long)countOfCallsPassingTest:(/*^block*/id)arg1 ;
-(id)callPassingTest:(/*^block*/id)arg1 withOptions:(unsigned long long)arg2 ;
-(NSArray *)calls;
-(NSArray *)callsOnDefaultPairedDevice;
-(NSArray *)incomingCalls;
-(id)audioAndVideoCallsWithStatus:(int)arg1 ;
-(TUCall *)frontmostAudioOrVideoCall;
-(void)enumerateCallsWithOptions:(unsigned long long)arg1 invokingBlock:(/*^block*/id)arg2 forCallsPassingTest:(/*^block*/id)arg3 ;
@end

