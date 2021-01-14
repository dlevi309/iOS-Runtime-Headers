/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreServices/SSVURLDataConsumer.h>

@interface SKUIImageDataConsumer : SSVURLDataConsumer

@property (getter=isImagePlaceholderAvailable,nonatomic,readonly) BOOL imagePlaceholderAvailable; 
-(id)objectForData:(id)arg1 response:(id)arg2 error:(id*)arg3 ;
-(id)imageForImage:(id)arg1 ;
-(BOOL)isImagePlaceholderAvailable;
-(id)imagePlaceholderForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 ;
-(id)imageForColor:(id)arg1 size:(CGSize)arg2 ;
@end

