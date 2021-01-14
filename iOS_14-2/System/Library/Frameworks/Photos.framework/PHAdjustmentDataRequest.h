/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHMediaRequest.h>

@protocol PHAdjustmentDataRequestDelegate;
@class PLCPLDownloadContext, PHAdjustmentDataResult, PHAdjustmentDataRequestBehaviorSpec;

@interface PHAdjustmentDataRequest : PHMediaRequest {

	PLCPLDownloadContext* _legacyDownloadContext;
	PHAdjustmentDataResult* _adjustmentDataResult;
	id<PHAdjustmentDataRequestDelegate> _delegate;
	PHAdjustmentDataRequestBehaviorSpec* _behaviorSpec;

}

@property (nonatomic,__weak,readonly) id<PHAdjustmentDataRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PHAdjustmentDataRequestBehaviorSpec * behaviorSpec;               //@synthesize behaviorSpec=_behaviorSpec - In the implementation block
-(PHAdjustmentDataRequestBehaviorSpec *)behaviorSpec;
-(void)startRequest;
-(id<PHAdjustmentDataRequestDelegate>)delegate;
-(id)initWithRequestID:(int)arg1 requestIndex:(unsigned long long)arg2 contextType:(long long)arg3 managerID:(unsigned long long)arg4 asset:(id)arg5 behaviorSpec:(id)arg6 delegate:(id)arg7 ;
-(void)_cplDownloadStatusNotification:(id)arg1 ;
-(BOOL)isSynchronous;
-(void)cancel;
@end

