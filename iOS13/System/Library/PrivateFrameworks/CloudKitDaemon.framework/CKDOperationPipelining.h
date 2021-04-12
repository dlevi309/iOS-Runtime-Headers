/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

@class NSString;


@protocol CKDOperationPipelining <NSObject>
@property (nonatomic,readonly) NSString * pipeliningDescription; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue; 
@required
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(id)arg1;
-(NSString *)pipeliningDescription;

@end

