/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <Foundation/NSOperation.h>

@class NSDate, NSError;

@interface WFOperation : NSOperation {

	BOOL _finished;
	NSDate* _start;
	NSError* _error;

}

@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)name;
-(NSError *)error;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(BOOL)isReady;
-(void)finish;
@end

