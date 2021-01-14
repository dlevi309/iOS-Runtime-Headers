/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/CNTaskTimeProfileLogging.h>

@protocol OS_os_log;
@class NSObject, NSString;

@interface _CNTimeProfilingTaskOSLogger : NSObject <CNTaskTimeProfileLogging> {

	NSObject*<OS_os_log> _os_log;

}

@property (readonly) NSObject*<OS_os_log> os_log;                   //@synthesize os_log=_os_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(id)initWithOSLog:(id)arg1 ;
-(void)taskWillBegin:(id)arg1 ;
-(void)task:(id)arg1 didCompleteAfter:(double)arg2 ;
-(void)task:(id)arg1 didFailWithError:(id)arg2 after:(double)arg3 ;
-(NSObject*<OS_os_log>)os_log;
@end

