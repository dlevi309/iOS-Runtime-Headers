/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

