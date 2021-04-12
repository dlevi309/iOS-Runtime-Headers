/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(BOOL)completedSuccessfully;
-(void)setCompletedSuccessfully:(BOOL)arg1 ;
@end

