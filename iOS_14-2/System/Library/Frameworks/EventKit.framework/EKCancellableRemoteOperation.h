/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@protocol EKCancellableRemoteOperation <NSObject>
@optional
-(void)receivedBatchResultsFromServer:(id)arg1 finished:(BOOL)arg2;

@required
-(void)disconnect;
-(void)cancel;

@end

