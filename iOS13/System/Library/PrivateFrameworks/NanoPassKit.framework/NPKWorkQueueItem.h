/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NPKOSTransaction;

@interface NPKWorkQueueItem : NSObject {

	NPKOSTransaction* _transaction;
	/*^block*/id _workBlock;

}

@property (nonatomic,readonly) NPKOSTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) id workBlock;                                //@synthesize workBlock=_workBlock - In the implementation block
+(id)itemWithTransaction:(id)arg1 work:(/*^block*/id)arg2 ;
-(NPKOSTransaction *)transaction;
-(id)workBlock;
-(id)initWithTransaction:(id)arg1 work:(/*^block*/id)arg2 ;
@end

