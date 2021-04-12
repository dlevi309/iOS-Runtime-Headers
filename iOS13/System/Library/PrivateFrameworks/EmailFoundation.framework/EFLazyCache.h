/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id<EFLazyCacheDelegate>)delegate;
-(void)setDelegate:(id<EFLazyCacheDelegate>)arg1 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
-(id)initWithCountLimit:(unsigned long long)arg1 ;
-(id)objectForKey:(id)arg1 generator:(/*^block*/id)arg2 ;
-(id)cachedObjectForKey:(id)arg1 ;
-(void)_exchangeOriginalObject:(id)arg1 forKey:(id)arg2 withObject:(id)arg3 ;
-(id)storedObjectForKey:(id)arg1 ;
-(long long)waiterCountForKey:(id)arg1 ;
@end

