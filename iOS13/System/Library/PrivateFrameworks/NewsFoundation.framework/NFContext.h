/*
* Generated on Monday, March 1, 2021 at 2:32:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
*/

#import <libobjc.A.dylib/NFContext.h>

@protocol NFContext <NFCallbackRegistration>
@required
-(void)useObject:(id)arg1 forClass:(Class)arg2;
-(void)useObject:(id)arg1 forClass:(Class)arg2 name:(id)arg3;
-(void)useObject:(id)arg1 forProtocol:(id)arg2;
-(void)useObject:(id)arg1 forProtocol:(id)arg2 name:(id)arg3;

@end


@class NFCallbackStore, NSMutableDictionary, NSString;

@interface NFContext : NSObject <NFContext> {

	NFCallbackStore* _callbackStore;
	NSMutableDictionary* _objects;

}

@property (nonatomic,readonly) NSMutableDictionary * objects;                //@synthesize objects=_objects - In the implementation block
@property (nonatomic,readonly) NFCallbackStore * callbackStore;              //@synthesize callbackStore=_callbackStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableDictionary *)objects;
-(NFCallbackStore *)callbackStore;
-(void)whenResolvingClass:(Class)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)whenResolvingProtocol:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)whenResolvingKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(void)whenUnsafeResolvingWithKey:(id)arg1 scope:(id)arg2 callbackBlock:(/*^block*/id)arg3 ;
-(id)mergeWithContext:(id)arg1 ;
-(id)resolveForKey:(id)arg1 ;
-(id)initWithCallbackStore:(id)arg1 ;
-(void)useObject:(id)arg1 forClass:(Class)arg2 ;
-(void)useObject:(id)arg1 forClass:(Class)arg2 name:(id)arg3 ;
-(void)useObject:(id)arg1 forProtocol:(id)arg2 ;
-(void)useObject:(id)arg1 forProtocol:(id)arg2 name:(id)arg3 ;
-(void)useObject:(id)arg1 forKey:(id)arg2 ;
-(void)unsafeUseObject:(id)arg1 forKey:(id)arg2 name:(id)arg3 ;
@end

