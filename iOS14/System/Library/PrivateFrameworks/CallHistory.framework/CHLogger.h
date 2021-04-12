/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/


#import <CallHistory/CallHistory-Structs.h>
@interface CHLogger : NSObject {

	os_log_sRef _logHandle;

}
-(id)initWithDomain:(const char*)arg1 ;
-(os_log_sRef)logHandle;
@end

