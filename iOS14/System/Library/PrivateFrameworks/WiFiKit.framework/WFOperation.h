/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)finish;
-(void)start;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(id)description;
-(BOOL)isReady;
@end

