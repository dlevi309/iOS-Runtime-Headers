/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/NSCacheDelegate.h>

@protocol EFLazyCacheDelegate;
@class NSRecursiveLock, NSCache, NSString;

@interface EFLazyCache : NSObject <NSCacheDelegate> {

	NSRecursiveLock* _lock;
	NSCache* _storage;
	struct {
		unsigned delegateRespondsToLazyCacheWillEvictObject : 1;
	}  _flags;
	id<EFLazyCacheDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EFLazyCacheDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<EFLazyCacheDelegate>)delegate;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setDelegate:(id<EFLazyCacheDelegate>)arg1 ;
-(id)cachedObjectForKey:(id)arg1 ;
-(void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3 ;
-(void)removeAllObjects;
-(id)storedObjectForKey:(id)arg1 ;
-(id)initWithCountLimit:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 generator:(/*^block*/id)arg2 ;
-(long long)waiterCountForKey:(id)arg1 ;
-(void)dealloc;
@end

