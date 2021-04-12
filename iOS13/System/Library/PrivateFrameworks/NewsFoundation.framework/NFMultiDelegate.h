/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)conformsToProtocol:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)delegate;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)children;
-(Protocol *)delegateProtocol;
-(id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2 ;
-(void)replaceDelegate:(id)arg1 withDelegate:(id)arg2 ;
@end

