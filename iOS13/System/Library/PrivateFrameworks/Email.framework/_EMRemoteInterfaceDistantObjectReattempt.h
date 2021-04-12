/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
*/


@class NSInvocation, NSError;

@interface _EMRemoteInterfaceDistantObjectReattempt : NSObject {

	NSInvocation* _invocation;
	NSError* _error;

}

@property (readonly) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (readonly) NSError * error;                        //@synthesize error=_error - In the implementation block
+(id)recordedAttemptWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
-(id)debugDescription;
-(NSError *)error;
-(NSInvocation *)invocation;
-(void)perform;
-(id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
@end

