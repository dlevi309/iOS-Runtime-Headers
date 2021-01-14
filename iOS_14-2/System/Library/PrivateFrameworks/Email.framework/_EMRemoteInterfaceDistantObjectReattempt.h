/*
* Generated on Thursday, January 14, 2021 at 2:23:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSInvocation *)invocation;
-(void)perform;
-(NSError *)error;
-(id)initWithOriginalInvocation:(id)arg1 target:(id)arg2 error:(id)arg3 ;
@end

