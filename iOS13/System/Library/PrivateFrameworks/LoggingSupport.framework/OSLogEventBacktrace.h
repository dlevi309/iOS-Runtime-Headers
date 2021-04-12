/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSArray;

@interface OSLogEventBacktrace : NSObject {

	NSArray* _frames;

}

@property (nonatomic,readonly) NSArray * frames;              //@synthesize frames=_frames - In the implementation block
-(void)dealloc;
-(NSArray *)frames;
-(id)initWithBacktrace:(os_log_backtrace_s*)arg1 ;
-(id)initWithSingleFrame:(id)arg1 ;
@end

