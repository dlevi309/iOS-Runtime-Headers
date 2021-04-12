/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface BLTSectionInfoSyncAlertingSectionState : NSObject {

	unsigned long long _state;
	/*^block*/id _clientCompletion;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (assign,nonatomic) unsigned long long state;                              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id clientCompletion;                                     //@synthesize clientCompletion=_clientCompletion - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
-(id)description;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)clientCompletion;
-(void)setClientCompletion:(id)arg1 ;
@end

