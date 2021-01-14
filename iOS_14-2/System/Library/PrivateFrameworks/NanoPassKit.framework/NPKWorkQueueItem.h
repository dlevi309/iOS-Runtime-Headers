/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

