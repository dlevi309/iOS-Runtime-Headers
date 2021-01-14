/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <TouchRemote/TRRequestMessage.h>

@interface TRSetupCompletionRequest : TRRequestMessage {

	BOOL _completedSuccessfully;
	long long _errorCode;

}

@property (assign,nonatomic) BOOL completedSuccessfully;              //@synthesize completedSuccessfully=_completedSuccessfully - In the implementation block
@property (assign,nonatomic) long long errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)errorCode;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)completedSuccessfully;
-(void)setCompletedSuccessfully:(BOOL)arg1 ;
@end

