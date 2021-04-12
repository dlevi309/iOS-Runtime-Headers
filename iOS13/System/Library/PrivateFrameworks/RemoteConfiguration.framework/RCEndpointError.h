/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/


@class NSString;

@interface RCEndpointError : NSObject {

	NSString* _errorCode;
	NSString* _message;
	NSString* _stacktrace;

}

@property (nonatomic,copy,readonly) NSString * errorCode;               //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) NSString * stacktrace;              //@synthesize stacktrace=_stacktrace - In the implementation block
+(id)endpointErrorWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)message;
-(NSString *)errorCode;
-(id)initWithErrorCode:(id)arg1 message:(id)arg2 stacktrace:(id)arg3 ;
-(NSString *)stacktrace;
@end

