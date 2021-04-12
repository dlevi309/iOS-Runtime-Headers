/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@class NSString, NSError;

@interface SBKResponseStatus : NSObject {

	BOOL _isRecoverable;
	BOOL _isError;
	BOOL _shouldFileRadar;
	BOOL _isPuntedError;
	long long _statusCode;
	NSString* _consoleDescription;

}

@property (readonly) long long statusCode;                            //@synthesize statusCode=_statusCode - In the implementation block
@property (copy,readonly) NSString * consoleDescription;              //@synthesize consoleDescription=_consoleDescription - In the implementation block
@property (readonly) NSError * requestError; 
@property (readonly) BOOL isSuccess; 
@property (readonly) BOOL isRecoverable;                              //@synthesize isRecoverable=_isRecoverable - In the implementation block
@property (readonly) BOOL isError;                                    //@synthesize isError=_isError - In the implementation block
@property (readonly) BOOL shouldFileRadar;                            //@synthesize shouldFileRadar=_shouldFileRadar - In the implementation block
@property (readonly) BOOL isGenericError; 
@property (readonly) BOOL isUnsupportedClient; 
@property (readonly) BOOL isAuthenticationError; 
@property (readonly) BOOL isValidationError; 
@property (readonly) BOOL isPuntedError;                              //@synthesize isPuntedError=_isPuntedError - In the implementation block
+(id)responseStatusForStatusCodeNumber:(id)arg1 ;
-(long long)statusCode;
-(BOOL)isSuccess;
-(NSError *)requestError;
-(BOOL)isError;
-(NSString *)consoleDescription;
-(BOOL)isUnsupportedClient;
-(BOOL)isGenericError;
-(BOOL)isValidationError;
-(BOOL)isAuthenticationError;
-(BOOL)isPuntedError;
-(BOOL)isRecoverable;
-(BOOL)shouldFileRadar;
-(id)initWithStatus:(long long)arg1 isRecoverable:(BOOL)arg2 isError:(BOOL)arg3 consoleDescription:(id)arg4 shouldFileRadar:(BOOL)arg5 ;
@end

