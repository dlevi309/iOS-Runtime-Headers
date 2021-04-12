/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSManaging <NSObject>
@property (nonatomic,retain) id<DDSManagingDelegate> delegate; 
@required
-(id<DDSManagingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)triggerUpdate;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
-(void)triggerDump;
-(void)removeAssertionWithID:(id)arg1;
-(void)assertionIDsForClientID:(id)arg1 reply:(/*^block*/id)arg2;

@end

