/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/


@interface MBError : NSObject
+(id)errorWithCode:(long long)arg1 format:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3 ;
+(BOOL)isError:(id)arg1 withCode:(long long)arg2 ;
+(id)errorWithCode:(long long)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)dictionaryRepresentationForError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 path:(id)arg3 format:(id)arg4 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4 ;
+(id)errorWithDictionaryRepresentation:(id)arg1 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4 ;
+(BOOL)isError:(id)arg1 withCodes:(long long)arg2 ;
+(id)descriptionForError:(id)arg1 ;
+(id)posixErrorWithCode:(long long)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)posixErrorWithCode:(long long)arg1 format:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 description:(id)arg2 ;
+(id)posixErrorWithPath:(id)arg1 format:(id)arg2 ;
+(id)sanitizedError:(id)arg1 ;
+(id)descriptionForError:(id)arg1 paths:(BOOL)arg2 ;
+(int)codeForNSError:(id)arg1 ;
+(int)codeForErrno:(int)arg1 ;
+(id)errorWithErrno:(int)arg1 code:(long long)arg2 path:(id)arg3 format:(id)arg4 arguments:(char*)arg5 ;
+(id)loggableDescriptionForError:(id)arg1 ;
+(id)formatErrors:(id)arg1 descriptionSelector:(SEL)arg2 ;
+(BOOL)isUnexpectedErrorCode:(long long)arg1 ;
+(int)errnoForError:(id)arg1 ;
+(BOOL)isTransientError:(id)arg1 ;
+(BOOL)isCancelledError:(id)arg1 ;
+(BOOL)isNSError:(id)arg1 withCode:(long long)arg2 ;
+(BOOL)isRetryAfterError:(id)arg1 retryAfterDate:(id*)arg2 ;
+(id)errorWithErrors:(id)arg1 ;
+(id)errorWithErrno:(int)arg1 format:(id)arg2 ;
+(id)errorWithErrno:(int)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)posixErrorWithFormat:(id)arg1 ;
+(id)errorForNSError:(id)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorForHTTPURLResponse:(id)arg1 error:(id)arg2 ;
@end

