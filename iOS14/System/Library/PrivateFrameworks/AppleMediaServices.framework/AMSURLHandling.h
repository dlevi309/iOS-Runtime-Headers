/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

@class AMSURLSession;


@protocol AMSURLHandling <NSObject>
@property (assign,nonatomic,__weak) AMSURLSession * session; 
@required
-(void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3;
-(AMSURLSession *)session;
-(void)setSession:(id)arg1;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4;
-(id)handleResponse:(id)arg1 task:(id)arg2;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
-(id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3;

@end

