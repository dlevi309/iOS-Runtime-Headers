/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)message;
-(NSString *)errorCode;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithErrorCode:(id)arg1 message:(id)arg2 stacktrace:(id)arg3 ;
-(NSString *)stacktrace;
@end

