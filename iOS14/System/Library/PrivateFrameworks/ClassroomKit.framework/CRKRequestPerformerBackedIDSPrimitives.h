/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIDSPrimitives.h>

@protocol CRKRequestPerformingProtocol;
@class NSDictionary, CATOperationQueue;

@interface CRKRequestPerformerBackedIDSPrimitives : NSObject <CRKIDSPrimitives> {

	id<CRKRequestPerformingProtocol> _requestPerformer;
	CATOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) id<CRKRequestPerformingProtocol> requestPerformer;              //@synthesize requestPerformer=_requestPerformer - In the implementation block
@property (nonatomic,readonly) CATOperationQueue * operationQueue;                             //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
-(CATOperationQueue *)operationQueue;
-(NSDictionary *)debugInfo;
-(id<CRKRequestPerformingProtocol>)requestPerformer;
-(void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)listenForMessagesWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithRequestPerformer:(id)arg1 operationQueue:(id)arg2 ;
@end

