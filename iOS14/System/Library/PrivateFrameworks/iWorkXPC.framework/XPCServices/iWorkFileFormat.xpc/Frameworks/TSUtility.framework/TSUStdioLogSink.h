/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_queue;
#import <TSUtility/TSUtility-Structs.h>
@class NSObject, NSDateFormatter;

@interface TSUStdioLogSink : NSObject {

	NSObject*<OS_dispatch_queue> _logQueue;
	NSDateFormatter* _dateFormatter;

}
+(id)sharedInstance;
-(id)init;
-(/*^block*/id)logSinkBlockWithFilePointer:(_sFILE*)arg1 ;
@end

