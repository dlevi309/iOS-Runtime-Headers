/*
* Generated on Thursday, January 14, 2021 at 2:24:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <libobjc.A.dylib/NFCallbackRegistration.h>

@protocol NFCallbackRegistration <NSObject>
@required
-(void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;
-(void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3;

@end


@protocol NFDefinitionContainer;
@class NFCallbackStore, NSString;

@interface NFCallbackRegistration : NSObject <NFCallbackRegistration> {

	NFCallbackStore* _callbackStore;
	id<NFDefinitionContainer> _privateContainer;

}

@property (nonatomic,readonly) NFCallbackStore * callbackStore;                         //@synthesize callbackStore=_callbackStore - In the implementation block
@property (nonatomic,readonly) id<NFDefinitionContainer> privateContainer;              //@synthesize privateContainer=_privateContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(id<NFDefinitionContainer>)privateContainer;
-(void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(NFCallbackStore *)callbackStore;
-(void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(id)initWithCallbackStore:(id)arg1 privateContainer:(id)arg2 ;
@end

