/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithSize:(CGSize)arg1 pixelFormat:(unsigned)arg2 ;
-(CGSize)sizeForLayout:(unsigned long long)arg1 ;
-(id)initWithPortraitSize:(CGSize)arg1 landscapeSize:(CGSize)arg2 pixelFormat:(unsigned)arg3 ;
@end

