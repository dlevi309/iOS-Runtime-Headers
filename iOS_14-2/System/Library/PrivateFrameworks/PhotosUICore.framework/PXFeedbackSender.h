/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXFeedbackSender : NSObject {

	unsigned long long _feedbackType;
	BOOL _userLikedResults;

}
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)sendFeedback:(id)arg1 forFeedbackType:(unsigned long long)arg2 ;
-(void)sendFeedbackToServer:(id)arg1 ;
-(BOOL)sendFeedbackWithFeedbackEntryUUID:(id)arg1 ;
-(BOOL)sendPendingFeedbackToServer;
-(void)testTalkToServer;
-(id)generateFeedbackParamsStringForEntry:(id)arg1 ;
-(void)_sendFeedbackEntryToOSService:(id)arg1 ;
-(void)_incrementCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
-(void)_incrementCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
-(void)_incrementAGGDCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
-(void)_incrementMessageTracerCounterForMixedFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
-(void)_incrementMessageTracerCounterForFeedbackValueKey:(id)arg1 ofEntry:(id)arg2 ;
@end

