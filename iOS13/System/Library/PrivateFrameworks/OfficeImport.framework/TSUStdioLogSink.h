/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@protocol OS_dispatch_queue;
#import <OfficeImport/OfficeImport-Structs.h>
@class NSObject, NSDateFormatter;

@interface TSUStdioLogSink : NSObject {

	NSObject*<OS_dispatch_queue> _logQueue;
	NSDateFormatter* _dateFormatter;

}
+(id)sharedInstance;
-(id)init;
-(/*^block*/id)logSinkBlockWithFilePointer:(_sFILE*)arg1 ;
@end

