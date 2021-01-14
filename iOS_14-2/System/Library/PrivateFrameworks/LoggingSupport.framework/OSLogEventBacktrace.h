/*
* Generated on Thursday, January 14, 2021 at 2:22:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSArray;

@interface OSLogEventBacktrace : NSObject {

	NSArray* _frames;

}

@property (nonatomic,readonly) NSArray * frames;              //@synthesize frames=_frames - In the implementation block
-(id)initWithBacktrace:(os_log_backtrace_s*)arg1 ;
-(id)initWithSingleFrame:(id)arg1 ;
-(NSArray *)frames;
-(id)initWithFrames:(id)arg1 ;
-(void)dealloc;
@end

