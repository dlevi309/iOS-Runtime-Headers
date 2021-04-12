/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/


#import <AppleAccountUI/AppleAccountUI-Structs.h>
@class UIImage, NSString, NSDate;

@interface _AAUIRawImageAndCropRectCacheEntry : NSObject {

	UIImage* _rawImage;
	NSString* _serverCacheTag;
	NSDate* _expirationDate;
	CGRect _rawCropRect;

}

@property (nonatomic,readonly) UIImage * rawImage;                     //@synthesize rawImage=_rawImage - In the implementation block
@property (nonatomic,readonly) CGRect rawCropRect;                     //@synthesize rawCropRect=_rawCropRect - In the implementation block
@property (nonatomic,readonly) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)entryWithRawImage:(id)arg1 rawCropRect:(CGRect)arg2 serverCacheTag:(id)arg3 ;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(NSString *)serverCacheTag;
-(UIImage *)rawImage;
-(CGRect)rawCropRect;
@end

