/*
* Generated on Thursday, January 14, 2021 at 2:26:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
*/


@class PGManager;

@interface PHANotificationController : NSObject {

	PGManager* _graphManager;

}
-(id)initWithGraphManager:(id)arg1 ;
-(void)fireNotificationForSuggestionIdentifiers:(id)arg1 ;
-(void)postNotificationForMemory:(id)arg1 withCreationReason:(unsigned long long)arg2 forceImmediateDelivery:(BOOL)arg3 ;
-(void)fireNotificationForMemoryIdentifiers:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(BOOL)shouldFireNotificationForMemories:(id)arg1 withCreationReason:(unsigned long long)arg2 ;
-(BOOL)userIsActivelyUsingPhotos;
-(id)bestDateForDeliveringNotification;
-(void)postNotificationForSuggestion:(id)arg1 deliveryDate:(id)arg2 ;
@end

