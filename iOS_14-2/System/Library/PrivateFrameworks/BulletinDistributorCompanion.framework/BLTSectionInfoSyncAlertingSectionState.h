/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)description;
-(void)setState:(unsigned long long)arg1 ;
-(void)setClientQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)state;
-(id)clientCompletion;
-(void)setClientCompletion:(id)arg1 ;
@end

