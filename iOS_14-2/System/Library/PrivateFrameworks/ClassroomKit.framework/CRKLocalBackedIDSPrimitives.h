/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CRKIDSPrimitives.h>

@protocol CRKIDSLocalPrimitives;
@class CATOperationQueue, NSDictionary;

@interface CRKLocalBackedIDSPrimitives : NSObject <CRKIDSPrimitives> {

	id<CRKIDSLocalPrimitives> _IDSLocalPrimitives;
	CATOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) id<CRKIDSLocalPrimitives> IDSLocalPrimitives;              //@synthesize IDSLocalPrimitives=_IDSLocalPrimitives - In the implementation block
@property (nonatomic,readonly) CATOperationQueue * operationQueue;                        //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * debugInfo; 
-(CATOperationQueue *)operationQueue;
-(NSDictionary *)debugInfo;
-(void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)listenForMessagesWithHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id<CRKIDSLocalPrimitives>)IDSLocalPrimitives;
-(id)initWithIDSLocalPrimitives:(id)arg1 operationQueue:(id)arg2 ;
-(id)operationDebugInfo;
-(id)initWithIDSLocalPrimitives:(id)arg1 ;
@end

