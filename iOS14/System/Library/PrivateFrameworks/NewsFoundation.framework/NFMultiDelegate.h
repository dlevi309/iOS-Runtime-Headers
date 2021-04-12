/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/


@class NSHashTable, Protocol;

@interface NFMultiDelegate : NSObject {

	NSHashTable* _children;
	Protocol* _delegateProtocol;

}

@property (nonatomic,readonly) NSHashTable * children;                   //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) Protocol * delegateProtocol;              //@synthesize delegateProtocol=_delegateProtocol - In the implementation block
@property (nonatomic,readonly) id delegate; 
-(NSHashTable *)children;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2 ;
-(void)replaceDelegate:(id)arg1 withDelegate:(id)arg2 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(Protocol *)delegateProtocol;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

