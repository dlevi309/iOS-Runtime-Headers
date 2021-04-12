/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/


@protocol DDSAssetTracking <NSObject>
@property (nonatomic,retain) id<DDSAssetTrackingDelegate> delegate; 
@required
-(id<DDSAssetTrackingDelegate>)delegate;
-(id)allAssertions;
-(void)setDelegate:(id)arg1;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4;
-(void)didUpdateAssertion:(id)arg1 atDate:(id)arg2;
-(void)removeAssertionWithID:(id)arg1;
-(id)assertionDueForUpdateSinceDate:(id)arg1;
-(id)trackedAssetTypes;
-(id)assertionIDsForClientID:(id)arg1;

@end

