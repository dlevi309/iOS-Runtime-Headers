/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/CKOperationCallbacks.h>

@class NSString, Protocol;

@interface CKDLongLivedOperationPersistedCallbackProxy : NSObject <CKOperationCallbacks> {

	NSString* _operationID;
	Protocol* _callbackProtocol;
	SEL _completionSelector;

}

@property (nonatomic,copy) NSString * operationID;                     //@synthesize operationID=_operationID - In the implementation block
@property (nonatomic,retain) Protocol * callbackProtocol;              //@synthesize callbackProtocol=_callbackProtocol - In the implementation block
@property (assign,nonatomic) SEL completionSelector;                   //@synthesize completionSelector=_completionSelector - In the implementation block
-(NSString *)operationID;
-(Protocol *)callbackProtocol;
-(void)setOperationID:(NSString *)arg1 ;
-(void)setCallbackProtocol:(Protocol *)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithOperationID:(id)arg1 callbackProtocol:(id)arg2 completionSelector:(SEL)arg3 ;
-(SEL)completionSelector;
-(void)setCompletionSelector:(SEL)arg1 ;
@end

