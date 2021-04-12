/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
*/

#import <CalendarFoundation/CalLogWriter.h>

@protocol OS_os_log;
@class NSObject;

@interface CalOSLogWriter : CalLogWriter {

	NSObject*<OS_os_log> CalOSLogClient;

}
+(id)autoLogNamespaces;
-(void)write:(id)arg1 ;
-(id)initWithParameters:(id)arg1 ;
-(void)_configureOSLogClient;
-(void)_configureAutoLogNamespaces;
-(void)_logStringInChunks:(id)arg1 ;
-(unsigned long long)_indexToSplitOnForIndex:(unsigned long long)arg1 chunkBytes:(const char*)arg2 ;
@end

