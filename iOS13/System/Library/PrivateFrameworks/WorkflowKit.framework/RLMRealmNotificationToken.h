/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(RLMRealm *)realm;
-(void)setRealm:(RLMRealm *)arg1 ;
-(void)suppressNextNotification;
@end

