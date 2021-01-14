/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(TUCall *)displayedCall;
-(TUCall *)frontmostCall;
-(NSArray *)_allCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2;
-(BOOL)existingCallsHaveMultipleProviders;
-(TUCall *)frontmostAudioOrVideoCall;

@end

