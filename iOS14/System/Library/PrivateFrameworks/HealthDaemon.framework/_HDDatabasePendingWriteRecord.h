/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@interface _HDDatabasePendingWriteRecord : NSObject {

	/*^block*/id _writeBlock;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id writeBlock;              //@synthesize writeBlock=_writeBlock - In the implementation block
@property (nonatomic,copy,readonly) id completion;              //@synthesize completion=_completion - In the implementation block
-(id)initWithWriteBlock:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)completion;
-(id)writeBlock;
@end

