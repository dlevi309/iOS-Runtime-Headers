/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleDepth.framework/AppleDepth
*/


#import <AppleDepth/AppleDepth-Structs.h>
@interface ADImageDescriptor : NSObject {

	CGSize _landscapeSize;
	CGSize _portraitSize;
	unsigned _pixelFormat;

}

@property (nonatomic,readonly) unsigned pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
+(id)descriptorWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 ;
+(id)descriptorWithPortraitSize:(CGSize)arg1 landscapeSize:(CGSize)arg2 pixelFormat:(unsigned)arg3 ;
-(unsigned)pixelFormat;
-(CGSize)sizeForLayout:(unsigned long long)arg1 ;
-(id)initWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 ;
-(id)initWithPortraitSize:(CGSize)arg1 landscapeSize:(CGSize)arg2 pixelFormat:(unsigned)arg3 ;
@end

