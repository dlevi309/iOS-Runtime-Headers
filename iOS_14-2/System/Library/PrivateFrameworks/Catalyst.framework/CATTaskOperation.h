/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUUID *)remoteUUID;
-(void)setNotificationDelegate:(id<CATTaskOperationNotificationDelegate>)arg1 ;
-(id)cat_assertions;
-(void)processMessage:(id)arg1 ;
-(id)init;
-(CATTaskRequest *)request;
-(void)processNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)cat_addAssertion:(id)arg1 ;
-(void)main;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)canSendNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)postNotificationWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)setRemoteUUID:(NSUUID *)arg1 ;
-(id<CATTaskOperationNotificationDelegate>)notificationDelegate;
@end

