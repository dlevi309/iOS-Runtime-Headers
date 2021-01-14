/*
* Generated on Thursday, January 14, 2021 at 2:24:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@interface VUIScopedBackgroundTask : NSObject {

	unsigned long long _taskIdentifier;

}

@property (assign,nonatomic) unsigned long long taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
-(id)init;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)taskIdentifier;
-(void)_endTask;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
@end

