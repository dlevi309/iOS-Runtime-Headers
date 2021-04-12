/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class Protocol;

@interface CKWeakObjectCallbackProxy : NSObject {

	BOOL _hadObject;
	id _weakObject;
	Protocol* _callbackProtocol;

}

@property (assign,nonatomic,__weak) id weakObject;                     //@synthesize weakObject=_weakObject - In the implementation block
@property (nonatomic,retain) Protocol * callbackProtocol;              //@synthesize callbackProtocol=_callbackProtocol - In the implementation block
@property (assign,nonatomic) BOOL hadObject;                           //@synthesize hadObject=_hadObject - In the implementation block
-(id)initWithWeakObject:(id)arg1 callbackProtocol:(id)arg2 ;
-(void)setWeakObject:(id)arg1 ;
-(Protocol *)callbackProtocol;
-(void)setCallbackProtocol:(Protocol *)arg1 ;
-(id)weakObject;
-(BOOL)hadObject;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setHadObject:(BOOL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

