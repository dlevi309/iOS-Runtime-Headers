/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHRecyclableObject.h>

@class NSError, NSDictionary, NSMutableArray, NSString;

@interface PHImageCacheEntry : NSObject <PHRecyclableObject> {

	NSError* _error;
	CGImageRef _imageRef;
	NSDictionary* _additionalInfo;
	os_unfair_lock_s _lock;
	BOOL _isCancelled;
	NSMutableArray* _handlersWaitingOnResult;
	int _imageRequestIDForPopulatingCache;

}

@property (assign,nonatomic) int imageRequestIDForPopulatingCache;              //@synthesize imageRequestIDForPopulatingCache=_imageRequestIDForPopulatingCache - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalInfo;                   //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)cancel;
-(BOOL)isCancelled;
-(void)prepareForReuse;
-(NSDictionary *)additionalInfo;
-(CGImageRef)createImageRef;
-(BOOL)hasImageRef;
-(void)_callWaiters:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)addNotifyHandler:(/*^block*/id)arg1 ;
-(void)populateWithImageRef:(CGImageRef)arg1 additionalInfo:(id)arg2 error:(id)arg3 executeBeforeNotifyingWaitersBlock:(/*^block*/id)arg4 ;
-(int)imageRequestIDForPopulatingCache;
-(void)setImageRequestIDForPopulatingCache:(int)arg1 ;
@end

