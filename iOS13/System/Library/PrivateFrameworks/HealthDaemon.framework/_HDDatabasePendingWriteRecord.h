/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface _HDDatabasePendingWriteRecord : NSObject {

	/*^block*/id _writeBlock;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id writeBlock;              //@synthesize writeBlock=_writeBlock - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(id)init;
-(id)completion;
-(id)writeBlock;
-(id)initWithWriteBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
@end

