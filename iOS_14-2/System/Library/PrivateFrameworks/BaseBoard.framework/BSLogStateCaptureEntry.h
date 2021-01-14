/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface BSLogStateCaptureEntry : NSObject {

	NSString* _title;
	/*^block*/id _captureBlock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) id captureBlock;                            //@synthesize captureBlock=_captureBlock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)captureBlock;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)title;
@end

