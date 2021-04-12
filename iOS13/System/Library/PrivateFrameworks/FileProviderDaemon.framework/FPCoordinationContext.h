/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/FileProviderDaemon
*/


@class NSProgress;

@interface FPCoordinationContext : NSObject {

	NSProgress* _progress;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) id completionHandler;               //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSProgress *)progress;
-(id)completionHandler;
-(id)initWithProgress:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

