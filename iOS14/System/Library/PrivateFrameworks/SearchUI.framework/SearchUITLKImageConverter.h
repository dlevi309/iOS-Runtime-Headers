/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/


#import <SearchUI/SearchUI-Structs.h>
@interface SearchUITLKImageConverter : NSObject
+(unsigned long long)tlkCornerRoundingStyleForSFCornerRoundingStyle:(int)arg1 ;
+(BOOL)imageIsProbablyOpaque:(id)arg1 tlkImage:(id)arg2 ;
+(void)executeBlock:(/*^block*/id)arg1 async:(BOOL)arg2 ;
+(BOOL)checkTransparencyForImageAtCorners:(CGImageRef)arg1 tlkImage:(id)arg2 uiImage:(id)arg3 ;
+(BOOL)hasTransparencyAtPoint:(CGPoint)arg1 forCGImage:(CGImageRef)arg2 ;
+(id)imagesForSFImages:(id)arg1 ;
+(id)imageForSFImage:(id)arg1 ;
+(id)imageForSFImage:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

