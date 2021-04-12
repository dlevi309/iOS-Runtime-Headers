/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class Protocol, NSInvocation;

@interface CKDLongLivedOperationPersistedCallback : NSObject <NSSecureCoding> {

	BOOL _isCompletionCallback;
	Protocol* _protocol;
	NSInvocation* _invocation;

}

@property (nonatomic,retain) Protocol * protocol;                    //@synthesize protocol=_protocol - In the implementation block
@property (nonatomic,retain) NSInvocation * invocation;              //@synthesize invocation=_invocation - In the implementation block
@property (assign,nonatomic) BOOL isCompletionCallback;              //@synthesize isCompletionCallback=_isCompletionCallback - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setProtocol:(Protocol *)arg1 ;
-(Protocol *)protocol;
-(void)encodeWithCoder:(id)arg1 ;
-(NSInvocation *)invocation;
-(void)setInvocation:(NSInvocation *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 invocation:(id)arg2 isCompletionCallback:(BOOL)arg3 ;
-(void)_validateInvocation;
-(BOOL)isCompletionCallback;
-(void)setIsCompletionCallback:(BOOL)arg1 ;
@end

