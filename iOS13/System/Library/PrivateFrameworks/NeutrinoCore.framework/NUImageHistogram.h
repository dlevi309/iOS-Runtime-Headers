/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NUHistogram;

@interface NUImageHistogram : NSObject <NSCopying, NSMutableCopying> {

	long long _sampleCount;
	long long _binCount;
	NUHistogram* _red;
	NUHistogram* _green;
	NUHistogram* _blue;
	NUHistogram* _luminance;
	SCD_Struct_NU10 _range;

}

@property (nonatomic,readonly) long long binCount;                   //@synthesize binCount=_binCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU10 range;                //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) long long sampleCount;                //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,readonly) NUHistogram * red;                    //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) NUHistogram * green;                  //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) NUHistogram * blue;                   //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) NUHistogram * luminance;              //@synthesize luminance=_luminance - In the implementation block
+(Class)_histogramClass;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_NU10)range;
-(NUHistogram *)red;
-(NUHistogram *)green;
-(NUHistogram *)blue;
-(long long)sampleCount;
-(NUHistogram *)luminance;
-(long long)binCount;
-(id)initWithBinCount:(long long)arg1 range:(SCD_Struct_NU10)arg2 ;
-(id)immutableCopyWithZone:(NSZone*)arg1 ;
@end

