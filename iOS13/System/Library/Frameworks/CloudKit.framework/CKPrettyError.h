/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <Foundation/NSError.h>

@interface CKPrettyError : NSError
+(id)_errorDomain;
+(id)errorWithCode:(long long)arg1 format:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 URL:(id)arg3 format:(id)arg4 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 format:(id)arg3 ;
+(id)itemErrorFromError:(id)arg1 forID:(id)arg2 ;
+(id)errorWithCode:(long long)arg1 path:(id)arg2 format:(id)arg3 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 format:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 path:(id)arg4 URL:(id)arg5 description:(id)arg6 ;
+(id)dictionaryRepresentationForError:(id)arg1 ;
+(id)errorWithDictionaryRepresentation:(id)arg1 ;
+(id)secureCodableError:(id)arg1 ;
+(id)descriptionForError:(id)arg1 paths:(BOOL)arg2 ;
+(id)descriptionForError:(id)arg1 ;
+(BOOL)isError:(id)arg1 withCode:(long long)arg2 ;
+(BOOL)isError:(id)arg1 withCodes:(id)arg2 ;
+(id)sanitizedError:(id)arg1 ;
+(id)errorWithCode:(long long)arg1 userInfo:(id)arg2 error:(id)arg3 format:(id)arg4 ;
+(id)errorWithCode:(long long)arg1 URL:(id)arg2 format:(id)arg3 ;
+(id)errorWithCode:(long long)arg1 error:(id)arg2 path:(id)arg3 format:(id)arg4 ;
+(id)errorWithDomain:(id)arg1 code:(long long)arg2 path:(id)arg3 format:(id)arg4 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)CKPartialErrorDescription;
@end

