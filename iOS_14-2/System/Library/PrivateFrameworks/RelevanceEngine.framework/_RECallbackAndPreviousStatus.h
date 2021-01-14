/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInvalidationCallback:(id)arg1 ;
-(id)invalidationCallback;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setStatus:(int)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)status;
@end

