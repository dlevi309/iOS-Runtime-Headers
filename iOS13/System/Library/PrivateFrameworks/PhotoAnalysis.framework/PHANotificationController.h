/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class PGManager;

@interface PHANotificationController : NSObject {

	PGManager* _graphManager;

}
-(id)initWithGraphManager:(id)arg1 ;
-(BOOL)userIsActivelyUsingPhotos;
-(id)bestDateForDeliveringNotification;
-(BOOL)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(void)fireNotificationForSuggestionIdentifiers:(id)arg1 ;
-(void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2 ;
@end

