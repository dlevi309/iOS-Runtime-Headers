/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


#import <CallHistory/CallHistory-Structs.h>
@interface CHLogger : NSObject {

	os_log_sRef _logHandle;

}
-(id)initWithDomain:(const char*)arg1 ;
-(os_log_sRef)logHandle;
@end

