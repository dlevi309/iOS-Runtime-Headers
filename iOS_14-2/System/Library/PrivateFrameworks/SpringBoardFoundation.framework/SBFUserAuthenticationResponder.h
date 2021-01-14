/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFAuthenticationResponder.h>

@class NSString;

@interface SBFUserAuthenticationResponder : NSObject <SBFAuthenticationResponder> {

	/*^block*/id _successHandler;
	/*^block*/id _failureHandler;
	/*^block*/id _invalidHandler;

}

@property (nonatomic,copy) id successHandler;                       //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy) id failureHandler;                       //@synthesize failureHandler=_failureHandler - In the implementation block
@property (nonatomic,copy) id invalidHandler;                       //@synthesize invalidHandler=_invalidHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)responderWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 invalidHandler:(/*^block*/id)arg3 ;
-(void)handleSuccessfulAuthenticationRequest:(id)arg1 ;
-(void)handleFailedAuthenticationRequest:(id)arg1 error:(id)arg2 ;
-(void)handleInvalidAuthenticationRequest:(id)arg1 ;
-(id)initWithSuccessHandler:(/*^block*/id)arg1 failureHandler:(/*^block*/id)arg2 invalidHandler:(/*^block*/id)arg3 ;
-(id)successHandler;
-(void)setSuccessHandler:(id)arg1 ;
-(id)failureHandler;
-(void)setFailureHandler:(id)arg1 ;
-(id)invalidHandler;
-(void)setInvalidHandler:(id)arg1 ;
@end

