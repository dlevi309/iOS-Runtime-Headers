/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalLogWriter.h>

@protocol OS_os_log;
@class NSObject;

@interface CalOSLogWriter : CalLogWriter {

	NSObject*<OS_os_log> CalOSLogClient;

}
+(id)autoLogNamespaces;
-(id)initWithParameters:(id)arg1 ;
-(void)write:(id)arg1 ;
-(void)_configureOSLogClient;
-(void)_configureAutoLogNamespaces;
-(void)_logStringInChunks:(id)arg1 ;
-(unsigned long long)_indexToSplitOnForIndex:(unsigned long long)arg1 chunkBytes:(const char*)arg2 ;
@end

