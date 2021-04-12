/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSAssetTracking <NSObject>
@property (nonatomic,retain) id<DDSAssetTrackingDelegate> delegate; 
@required
-(id<DDSAssetTrackingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(id)assertionIDsForClientID:(id)arg1;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
-(void)removeAssertionWithID:(id)arg1;
-(void)didUpdateAssertion:(id)arg1 atDate:(id)arg2;
-(id)assertionDueForUpdateSinceDate:(id)arg1;
-(id)trackedAssetTypes;

@end

