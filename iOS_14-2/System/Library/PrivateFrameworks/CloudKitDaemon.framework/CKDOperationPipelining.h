/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

