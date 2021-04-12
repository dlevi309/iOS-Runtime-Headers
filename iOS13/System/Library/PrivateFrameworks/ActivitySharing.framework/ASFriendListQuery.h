/*
* Generated on Monday, March 1, 2021 at 2:34:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)clientInterfaceProtocol;
+(BOOL)supportsTaskServers;
-(void)queue_validate;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)queue_deliverError:(id)arg1 ;
-(BOOL)queue_shouldDeactivateAfterInitialResults;
-(void)queue_queryDidDeactivate:(id)arg1 ;
-(void)client_deliverFriendList:(id)arg1 queryUUID:(id)arg2 ;
@end

