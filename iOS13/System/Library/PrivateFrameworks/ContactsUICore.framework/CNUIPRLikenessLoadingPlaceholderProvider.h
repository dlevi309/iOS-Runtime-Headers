/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUIPRLikenessProvider.h>

@protocol CNScheduler;
@class CNCache, NSString;

@interface CNUIPRLikenessLoadingPlaceholderProvider : NSObject <CNUIPRLikenessProvider> {

	id<CNScheduler> _resourceLock;
	CNCache* _cache;

}

@property (nonatomic,readonly) id<CNScheduler> resourceLock;              //@synthesize resourceLock=_resourceLock - In the implementation block
@property (nonatomic,readonly) CNCache * cache;                           //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(CNCache *)cache;
-(id<CNScheduler>)resourceLock;
-(id)_cnui_likenessForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_roundedRectImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_circularImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(unsigned long long)_cnui_likenessType;
-(CGImageRef)renderCircularImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)renderRoundedRectImageForSize:(CGSize)arg1 scale:(double)arg2 ;
@end

