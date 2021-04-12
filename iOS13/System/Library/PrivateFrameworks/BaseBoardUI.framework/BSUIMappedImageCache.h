/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSDebugDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSString, BSUIMappedImageCacheOptions, NSObject, NSMutableDictionary, NSMutableSet;

@interface BSUIMappedImageCache : NSObject <BSDescriptionProviding, BSDebugDescriptionProviding> {

	NSString* _path;
	NSString* _uniqueIdentifier;
	BSUIMappedImageCacheOptions* _options;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _queue_keysToImagesOrFutures;
	NSMutableSet* _queue_allKeys;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)allKeys;
-(void)removeAllObjects;
-(id)initWithName:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(unsigned long long)arg2 ;
-(id)imageForKey:(id)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 options:(id)arg2 ;
-(id)_imageForKey:(id)arg1 withCPBitmapReadFlags:(int)arg2 generatingIfNecessaryWithBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 andCPBitmapReadFlags:(int)arg4 completion:(/*^block*/id)arg5 ;
-(void)removeImageForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removeAllImagesWithCompletion:(/*^block*/id)arg1 ;
-(id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(/*^block*/id)arg2 ;
-(id)imageForKey:(id)arg1 generatingIfNecessaryWithBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeImageForKey:(id)arg1 ;
-(id)_imageForKey:(id)arg1 withCPBitmapReadFlags:(int)arg2 generatingIfNecessaryWithBlock:(/*^block*/id)arg3 ;
-(void)_setImage:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setImage:(id)arg1 forKey:(id)arg2 withPersistenceOptions:(unsigned long long)arg3 andCPBitmapReadFlags:(int)arg4 ;
-(void)_warmupImageForKey:(id)arg1 ;
-(void)_noteExternalChangeForKey:(id)arg1 ;
@end

