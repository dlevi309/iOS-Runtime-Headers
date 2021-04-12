/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUIPRLikenessProvider.h>

@class NSData, CNCache, NSString;

@interface CNUIPRLikenessPhotoProvider : NSObject <CNUIPRLikenessProvider> {

	NSData* _originalPhotoData;
	CNCache* _cache;

}

@property (nonatomic,readonly) CNCache * cache;                         //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSData * originalPhotoData;              //@synthesize originalPhotoData=_originalPhotoData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGImageRef)cgImageFromData:(id)arg1 ;
-(CNCache *)cache;
-(id)_cnui_likenessForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_roundedRectImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_circularImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_image;
-(id)initWithPhotoData:(id)arg1 ;
-(unsigned long long)_cnui_likenessType;
-(CGImageRef)renderCircularImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)renderRoundedRectImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(NSData *)originalPhotoData;
@end

