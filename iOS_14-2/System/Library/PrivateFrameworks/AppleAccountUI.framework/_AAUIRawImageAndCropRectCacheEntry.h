/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)serverCacheTag;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(UIImage *)rawImage;
-(CGRect)rawCropRect;
@end

