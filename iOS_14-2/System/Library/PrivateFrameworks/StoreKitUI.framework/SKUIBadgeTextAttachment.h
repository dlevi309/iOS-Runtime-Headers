/*
* Generated on Thursday, January 14, 2021 at 2:25:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSObject;

@interface SKUIBadgeTextAttachment : NSTextAttachment <NSCopying> {

	NSURL* _imageURL;
	NSObject*<OS_dispatch_semaphore> _imageLoadingSemaphore;

}

@property (retain) NSObject*<OS_dispatch_semaphore> imageLoadingSemaphore;              //@synthesize imageLoadingSemaphore=_imageLoadingSemaphore - In the implementation block
@property (nonatomic,readonly) CGSize badgeSize; 
@property (nonatomic,readonly) NSURL * imageURL;                                        //@synthesize imageURL=_imageURL - In the implementation block
-(CGSize)badgeSize;
-(unsigned long long)hash;
-(NSURL *)imageURL;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(void)_loadImageWithResourceName:(id)arg1 fallbackImage:(id)arg2 styleColor:(id)arg3 ;
-(void)setImageLoadingSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)_ensureImageIsLoaded;
-(NSObject*<OS_dispatch_semaphore>)imageLoadingSemaphore;
@end

