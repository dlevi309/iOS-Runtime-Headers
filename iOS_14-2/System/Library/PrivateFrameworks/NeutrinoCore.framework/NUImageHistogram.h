/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NU11 _range;

}

@property (nonatomic,readonly) long long binCount;                   //@synthesize binCount=_binCount - In the implementation block
@property (nonatomic,readonly) SCD_Struct_NU11 range;                //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) long long sampleCount;                //@synthesize sampleCount=_sampleCount - In the implementation block
@property (nonatomic,readonly) NUHistogram * red;                    //@synthesize red=_red - In the implementation block
@property (nonatomic,readonly) NUHistogram * green;                  //@synthesize green=_green - In the implementation block
@property (nonatomic,readonly) NUHistogram * blue;                   //@synthesize blue=_blue - In the implementation block
@property (nonatomic,readonly) NUHistogram * luminance;              //@synthesize luminance=_luminance - In the implementation block
+(Class)_histogramClass;
-(NUHistogram *)red;
-(id)init;
-(SCD_Struct_NU11)range;
-(NUHistogram *)luminance;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NUHistogram *)blue;
-(long long)sampleCount;
-(NUHistogram *)green;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)binCount;
-(id)initWithBinCount:(long long)arg1 range:(SCD_Struct_NU11)arg2 ;
-(id)immutableCopyWithZone:(NSZone*)arg1 ;
@end

