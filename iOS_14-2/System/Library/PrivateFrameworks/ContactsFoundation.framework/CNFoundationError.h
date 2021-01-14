/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@interface CNFoundationError : NSObject
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 ;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(id)errorWithErrno:(int)arg1 ;
+(id)userCanceledError;
+(BOOL)isCertificateError:(id)arg1 ;
+(id)timeoutError;
+(BOOL)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3 ;
+(id)errorWithErrno:(int)arg1 userInfo:(id)arg2 ;
+(BOOL)isCanceledError:(id)arg1 ;
+(BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(id)errorWithErrnoAndUserInfo:(id)arg1 ;
+(BOOL)isTimeoutError:(id)arg1 ;
+(id)errorWithErrno;
+(BOOL)isFileAlreadyExistsError:(id)arg1 ;
+(BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 underlyingError:(id)arg2 ;
+(BOOL)isFileNotFoundError:(id)arg1 ;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
@end

