/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SKUIViewElement;

@interface _SKUIDynamicGridSizeCacheKey : NSObject <NSCopying> {

	long long _position;
	SKUIViewElement* _viewElement;

}

@property (assign,nonatomic) long long position;                         //@synthesize position=_position - In the implementation block
@property (nonatomic,retain) SKUIViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(long long)position;
-(void)setPosition:(long long)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SKUIViewElement *)viewElement;
-(void)setViewElement:(SKUIViewElement *)arg1 ;
-(BOOL)__isSKUIDynamicGridSizeCacheKey;
@end

