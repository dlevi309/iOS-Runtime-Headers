/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKDOperationInfoDelegate <NSObject>
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(BOOL)isInvalidated;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;
-(void)operationWithID:(id)arg1 receivedCallback:(id)arg2;

@end

