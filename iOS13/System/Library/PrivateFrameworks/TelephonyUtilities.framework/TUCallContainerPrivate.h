/*
* Generated on Monday, March 1, 2021 at 2:31:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

@class NSArray, TUCall;


@protocol TUCallContainerPrivate <TUCallContainer>
@property (nonatomic,copy,readonly) NSArray * _allCalls; 
@property (nonatomic,readonly) TUCall * displayedCall; 
@property (nonatomic,readonly) TUCall * conferenceCall; 
@property (nonatomic,readonly) TUCall * frontmostCall; 
@property (nonatomic,retain,readonly) TUCall * frontmostAudioOrVideoCall; 
@property (nonatomic,readonly) BOOL existingCallsHaveMultipleProviders; 
@required
-(TUCall *)conferenceCall;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2;
-(NSArray *)_allCalls;
-(TUCall *)displayedCall;
-(TUCall *)frontmostCall;
-(TUCall *)frontmostAudioOrVideoCall;
-(BOOL)existingCallsHaveMultipleProviders;

@end

