/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMNotificationToken.h>

@class RLMRealm;

@interface RLMRealmNotificationToken : RLMNotificationToken {

	RLMRealm* _realm;
	/*^block*/id _block;

}

@property (nonatomic,retain) RLMRealm * realm;              //@synthesize realm=_realm - In the implementation block
@property (nonatomic,copy) id block;                        //@synthesize block=_block - In the implementation block
-(RLMRealm *)realm;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)invalidate;
-(void)setRealm:(RLMRealm *)arg1 ;
-(void)dealloc;
-(void)suppressNextNotification;
@end

