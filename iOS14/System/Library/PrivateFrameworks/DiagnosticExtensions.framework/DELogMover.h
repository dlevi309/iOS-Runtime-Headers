/*
* Generated on Thursday, January 14, 2021 at 2:23:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface DELogMover : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
+(void)moveSystemLogsWithExtensions:(id)arg1 ;
-(BOOL)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char*)arg2 ;
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
@end

