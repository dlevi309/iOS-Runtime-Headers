/*
* Generated on Monday, March 1, 2021 at 2:31:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

