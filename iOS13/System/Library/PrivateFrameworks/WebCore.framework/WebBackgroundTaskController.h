/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)backgroundTaskStartBlock;
-(void)setBackgroundTaskStartBlock:(id)arg1 ;
-(void)setBackgroundTaskEndBlock:(id)arg1 ;
-(void)setInvalidBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)startBackgroundTaskWithExpirationHandler:(/*^block*/id)arg1 ;
-(void)endBackgroundTaskWithIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)invalidBackgroundTaskIdentifier;
-(id)backgroundTaskEndBlock;
@end

