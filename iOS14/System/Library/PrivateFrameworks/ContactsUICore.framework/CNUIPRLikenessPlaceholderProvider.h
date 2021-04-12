/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/CNUIPRLikenessProvider.h>

@class CNCache, NSString;

@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider> {

	CNCache* _cache;

}

@property (nonatomic,readonly) CNCache * cache;                     //@synthesize cache=_cache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)imageNameForDiameter:(double)arg1 ;
+(id)companyImageNameForDiameter:(double)arg1 ;
-(unsigned long long)_cnui_likenessType;
-(id)_cnui_likenessForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CNCache *)cache;
-(id)init;
-(CGImageRef)_cnui_circularImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)_cnui_roundedRectImageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGImageRef)renderCircularImageForSilhouetteImage:(CGImageRef)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(CGImageRef)renderRoundedRectImageForSilhouetteImage:(CGImageRef)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
@end

