/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@protocol CKDOperationInfoDelegate <NSObject>
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@required
-(BOOL)isInvalidated;
-(void)wasUnexpectedlyUnregisteredForOperationID:(id)arg1;
-(void)operationWithID:(id)arg1 didProgress:(id)arg2;
-(void)operationWithID:(id)arg1 didComplete:(id)arg2;

@end

