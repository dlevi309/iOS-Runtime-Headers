/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface BSLogStateCaptureEntry : NSObject {

	NSString* _title;
	/*^block*/id _captureBlock;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id captureBlock;                                   //@synthesize captureBlock=_captureBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)captureBlock;
-(void)setCaptureBlock:(id)arg1 ;
@end

