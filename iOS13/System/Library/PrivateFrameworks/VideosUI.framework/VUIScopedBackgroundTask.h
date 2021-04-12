/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIScopedBackgroundTask : NSObject {

	unsigned long long _taskIdentifier;

}

@property (assign,nonatomic) unsigned long long taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)taskIdentifier;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)_endTask;
@end

