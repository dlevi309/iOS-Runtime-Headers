/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
*/

#import <HealthKit/HKQuery.h>
#import <libobjc.A.dylib/ASFriendListQueryClientInterface.h>

@class NSString;

@interface ASFriendListQuery : HKQuery <ASFriendListQueryClientInterface> {

	/*^block*/id _updateHandler;
	int _mostRecentToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsTaskServers;
+(id)clientInterfaceProtocol;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)queue_validate;
-(void)client_deliverFriendList:(id)arg1 queryUUID:(id)arg2 ;
@end

