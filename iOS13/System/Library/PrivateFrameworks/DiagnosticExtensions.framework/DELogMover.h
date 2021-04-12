/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithServiceName:(id)arg1 ;
-(NSString *)serviceName;
-(BOOL)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char*)arg2 ;
@end

