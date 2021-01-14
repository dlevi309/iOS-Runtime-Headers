/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class NSMutableSet, Protocol;

@interface AMSInlineDelegate : NSObject {

	NSMutableSet* _implementations;
	Protocol* _protocol;

}

@property (nonatomic,retain) NSMutableSet * implementations;              //@synthesize implementations=_implementations - In the implementation block
@property (nonatomic,retain) Protocol * protocol;                         //@synthesize protocol=_protocol - In the implementation block
-(void)setProtocol:(Protocol *)arg1 ;
-(Protocol *)protocol;
-(id)_initWithProtocol:(id)arg1 ;
-(BOOL)_implementMethodWithSelector:(SEL)arg1 isRequired:(BOOL)arg2 isInstance:(BOOL)arg3 block:(id)arg4 ;
-(NSMutableSet *)implementations;
-(void)setImplementations:(NSMutableSet *)arg1 ;
-(BOOL)implementOptionalClassMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(BOOL)implementRequiredClassMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(BOOL)implementRequiredInstanceMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(id)initWithProtocol:(id)arg1 ;
-(BOOL)implementOptionalInstanceMethodWithSelector:(SEL)arg1 block:(id)arg2 ;
-(void)dealloc;
@end

