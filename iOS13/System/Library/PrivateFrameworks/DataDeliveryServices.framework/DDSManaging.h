/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSManaging <NSObject>
@property (nonatomic,retain) id<DDSManagingDelegate> delegate; 
@required
-(id<DDSManagingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
-(void)removeAssertionWithID:(id)arg1;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2;

@end

