/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

@class AMSURLSession;


@protocol AMSURLHandling <NSObject>
@property (assign,nonatomic,__weak) AMSURLSession * session; 
@required
-(AMSURLSession *)session;
-(void)setSession:(id)arg1;
-(void)reconfigureNewRequest:(id)arg1 originalTask:(id)arg2 redirect:(BOOL)arg3 error:(id*)arg4;
-(id)handleResponse:(id)arg1 task:(id)arg2;
-(id)handleCompletionWithTask:(id)arg1 metrics:(id)arg2 decodedObject:(id)arg3;
-(id)decodeData:(id)arg1 task:(id)arg2 error:(id*)arg3;
-(void)didCreateTask:(id)arg1 fromRequest:(id)arg2 error:(id*)arg3;

@end

