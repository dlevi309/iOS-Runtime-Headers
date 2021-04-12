/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TROperation.h>

@interface TRCompletionOperation : TROperation {

	BOOL _success;
	long long _errorCode;

}

@property (assign,nonatomic) BOOL success;                     //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) long long errorCode;              //@synthesize errorCode=_errorCode - In the implementation block
-(void)execute;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
@end

