/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface UnitTestSessionTask_publishingURL_BasicTest_Delegate : NSObject <NSURLSessionTaskDelegate> {

	SmartBlockWithArgs<bool, NSError *>* _didDidCompleteWithErrorCompletionBlock;

}

@property (assign,nonatomic) SmartBlockWithArgs<bool didDidCompleteWithErrorCompletionBlock;              //@synthesize didDidCompleteWithErrorCompletionBlock=_didDidCompleteWithErrorCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(SmartBlockWithArgs<bool)didDidCompleteWithErrorCompletionBlock;
-(void)setDidDidCompleteWithErrorCompletionBlock:(SmartBlockWithArgs<bool)arg1 ;
@end

