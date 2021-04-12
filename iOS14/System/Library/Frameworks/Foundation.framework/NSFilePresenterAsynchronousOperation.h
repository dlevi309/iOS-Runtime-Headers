/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/NSOperation.h>

@interface NSFilePresenterAsynchronousOperation : NSOperation {

	/*^block*/id _block;
	BOOL _isFinished;
	BOOL _isExecuting;

}
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)finish;
-(void)start;
-(BOOL)isAsynchronous;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

