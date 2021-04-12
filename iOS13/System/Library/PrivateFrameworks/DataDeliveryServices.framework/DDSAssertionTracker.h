/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
*/

#import <libobjc.A.dylib/DDSAssetTracking.h>

@protocol DDSAssetTrackingDelegate, OS_dispatch_queue, DDSAssertionDataHandling;
@class NSMutableArray, NSObject, NSMutableDictionary, NSString;

@interface DDSAssertionTracker : NSObject <DDSAssetTracking> {

	id<DDSAssetTrackingDelegate> _delegate;
	NSMutableArray* _trackedAssertions;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _trackedAssertionSets;
	id<DDSAssertionDataHandling> _dataHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * trackedAssertions;                      //@synthesize trackedAssertions=_trackedAssertions - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * trackedAssertionSets;              //@synthesize trackedAssertionSets=_trackedAssertionSets - In the implementation block
@property (nonatomic,readonly) id<DDSAssertionDataHandling> dataHandler;                //@synthesize dataHandler=_dataHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<DDSAssetTrackingDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<DDSAssetTrackingDelegate>)delegate;
-(void)setDelegate:(id<DDSAssetTrackingDelegate>)arg1 ;
-(id<DDSAssertionDataHandling>)dataHandler;
-(id)assertionIDsForClientID:(id)arg1 ;
-(void)addAssertionForQuery:(id)arg1 policy:(id)arg2 assertionID:(id)arg3 clientID:(id)arg4 ;
-(void)removeAssertionWithID:(id)arg1 ;
-(id)initWithDataHandler:(id)arg1 ;
-(NSMutableArray *)trackedAssertions;
-(id)assertionDueForUpdateFrom:(id)arg1 SinceDate:(id)arg2 ;
-(double)intervalForDownloadFrequency:(long long)arg1 ;
-(void)didUpdateAssertion:(id)arg1 atDate:(id)arg2 ;
-(id)assertionDueForUpdateSinceDate:(id)arg1 ;
-(id)trackedAssetTypes;
-(NSMutableDictionary *)trackedAssertionSets;
@end

