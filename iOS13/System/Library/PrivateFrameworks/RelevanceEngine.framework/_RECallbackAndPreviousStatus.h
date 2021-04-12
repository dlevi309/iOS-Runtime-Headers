/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _RECallbackAndPreviousStatus : NSObject {

	int _status;
	/*^block*/id _invalidationCallback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) int status;                                      //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) id invalidationCallback;                           //@synthesize invalidationCallback=_invalidationCallback - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(void)setInvalidationCallback:(id)arg1 ;
-(id)invalidationCallback;
@end

