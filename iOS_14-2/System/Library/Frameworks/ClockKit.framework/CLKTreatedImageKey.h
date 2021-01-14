/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface CLKTreatedImageKey : NSObject <NSCopying> {

	UIImage* _rawImage;
	long long _scaleMode;
	double _scale;
	long long _maskMode;
	double _cornerRadius;
	CGSize _maxSize;

}

@property (nonatomic,readonly) UIImage * rawImage;               //@synthesize rawImage=_rawImage - In the implementation block
@property (nonatomic,readonly) long long scaleMode;              //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) CGSize maxSize;                   //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,readonly) double scale;                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) long long maskMode;               //@synthesize maskMode=_maskMode - In the implementation block
@property (nonatomic,readonly) double cornerRadius;              //@synthesize cornerRadius=_cornerRadius - In the implementation block
+(id)keyWithRawImage:(id)arg1 scale:(double)arg2 maskMode:(long long)arg3 ;
+(id)keyWithRawImage:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3 ;
+(id)keyWithRawImage:(id)arg1 maxSize:(CGSize)arg2 maskMode:(long long)arg3 ;
+(id)keyWithRawImage:(id)arg1 maxSize:(CGSize)arg2 cornerRadius:(double)arg3 ;
-(long long)maskMode;
-(double)scale;
-(double)cornerRadius;
-(long long)scaleMode;
-(CGSize)maxSize;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)rawImage;
@end

