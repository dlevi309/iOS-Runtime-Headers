/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <Foundation/NSOperation.h>

@interface QLAsynchronousOperation : NSOperation {

	BOOL _finished;
	BOOL _executing;

}

@property (assign,getter=isExecuting,nonatomic) BOOL executing;              //@synthesize executing=_executing - In the implementation block
@property (assign,getter=isFinished,nonatomic) BOOL finished;                //@synthesize finished=_finished - In the implementation block
-(void)finish;
-(void)start;
-(BOOL)isFinished;
-(void)setExecuting:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
@end

