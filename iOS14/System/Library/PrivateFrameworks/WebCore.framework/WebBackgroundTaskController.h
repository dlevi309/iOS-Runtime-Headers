/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/


@interface WebBackgroundTaskController : NSObject {

	unsigned long long _invalidBackgroundTaskIdentifier;
	/*^block*/id _backgroundTaskStartBlock;
	/*^block*/id _backgroundTaskEndBlock;

}

@property (assign,nonatomic) unsigned long long invalidBackgroundTaskIdentifier;              //@synthesize invalidBackgroundTaskIdentifier=_invalidBackgroundTaskIdentifier - In the implementation block
@property (nonatomic,copy) id backgroundTaskStartBlock;                                       //@synthesize backgroundTaskStartBlock=_backgroundTaskStartBlock - In the implementation block
@property (nonatomic,copy) id backgroundTaskEndBlock;                                         //@synthesize backgroundTaskEndBlock=_backgroundTaskEndBlock - In the implementation block
+(id)sharedController;
-(void)setInvalidBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)invalidBackgroundTaskIdentifier;
-(id)backgroundTaskEndBlock;
-(id)backgroundTaskStartBlock;
-(void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1 ;
-(void)setBackgroundTaskEndBlock:(id)arg1 ;
-(unsigned long long)startBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setBackgroundTaskStartBlock:(id)arg1 ;
@end

