/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
*/

#import <Catalyst/CATOperation.h>

@protocol CATTaskOperationNotificationDelegate;
@class CATTaskRequest, NSUUID;

@interface CATTaskOperation : CATOperation {

	CATTaskRequest* _request;
	id<CATTaskOperationNotificationDelegate> _notificationDelegate;
	NSUUID* _remoteUUID;

}

@property (nonatomic,copy) NSUUID * remoteUUID;                                                                 //@synthesize remoteUUID=_remoteUUID - In the implementation block
@property (nonatomic,readonly) CATTaskRequest * request;                                                        //@synthesize request=_request - In the implementation block
@property (assign,nonatomic,__weak) id<CATTaskOperationNotificationDelegate> notificationDelegate;              //@synthesize notificationDelegate=_notificationDelegate - In the implementation block
+(id)new;
+(BOOL)isCancelable;
+(BOOL)validateRequest:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)main;
-(CATTaskRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)setNotificationDelegate:(id<CATTaskOperationNotificationDelegate>)arg1 ;
-(void)processMessage:(id)arg1 ;
-(id<CATTaskOperationNotificationDelegate>)notificationDelegate;
-(BOOL)canSendNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)processNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(NSUUID *)remoteUUID;
-(void)setRemoteUUID:(NSUUID *)arg1 ;
-(void)cat_addAssertion:(id)arg1 ;
-(id)cat_assertions;
@end

