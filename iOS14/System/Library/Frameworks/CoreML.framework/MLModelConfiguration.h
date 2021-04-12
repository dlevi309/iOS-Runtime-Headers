/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MTLDevice;
@class NSDictionary, NSURL;

@interface MLModelConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowBackgroundGPUComputeSetting;
	BOOL _useWatchSPIForScribble;
	BOOL _allowLowPrecisionAccumulationOnGPU;
	BOOL _enableTestVectorMode;
	BOOL _usePreloadedKey;
	long long _computeUnits;
	id<MTLDevice> _preferredMetalDevice;
	NSDictionary* _parameters;
	NSURL* _rootModelURL;
	long long _profilingOptions;

}

@property (assign) BOOL allowBackgroundGPUComputeSetting;                     //@synthesize allowBackgroundGPUComputeSetting=_allowBackgroundGPUComputeSetting - In the implementation block
@property (assign,nonatomic) BOOL useWatchSPIForScribble;                     //@synthesize useWatchSPIForScribble=_useWatchSPIForScribble - In the implementation block
@property (assign,nonatomic) BOOL allowFloat16AccumulationOnGPU; 
@property (assign) BOOL allowLowPrecisionAccumulationOnGPU;                   //@synthesize allowLowPrecisionAccumulationOnGPU=_allowLowPrecisionAccumulationOnGPU - In the implementation block
@property (assign,nonatomic) BOOL allowBackgroundGPUCompute; 
@property (nonatomic,retain) id<MTLDevice> preferredMTLDevice; 
@property (nonatomic,retain) id<MTLDevice> preferredMetalDevice;              //@synthesize preferredMetalDevice=_preferredMetalDevice - In the implementation block
@property (assign,nonatomic) BOOL enableTestVectorMode;                       //@synthesize enableTestVectorMode=_enableTestVectorMode - In the implementation block
@property (retain) NSDictionary * parameters;                                 //@synthesize parameters=_parameters - In the implementation block
@property (retain) NSURL * rootModelURL;                                      //@synthesize rootModelURL=_rootModelURL - In the implementation block
@property (assign,nonatomic) long long profilingOptions;                      //@synthesize profilingOptions=_profilingOptions - In the implementation block
@property (assign,nonatomic) BOOL usePreloadedKey;                            //@synthesize usePreloadedKey=_usePreloadedKey - In the implementation block
@property (assign) long long computeUnits;                                    //@synthesize computeUnits=_computeUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(BOOL)allowBackgroundGPUCompute;
-(void)setProfilingOptions:(long long)arg1 ;
-(id)init;
-(void)setComputeUnits:(long long)arg1 ;
-(void)setEnableTestVectorMode:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPreferredMetalDevice:(id<MTLDevice>)arg1 ;
-(long long)computeUnits;
-(void)setRootModelURL:(NSURL *)arg1 ;
-(id<MTLDevice>)preferredMetalDevice;
-(void)setAllowLowPrecisionAccumulationOnGPU:(BOOL)arg1 ;
-(id)initWithComputeUnits:(long long)arg1 ;
-(id)description;
-(BOOL)allowBackgroundGPUComputeSetting;
-(id<MTLDevice>)preferredMTLDevice;
-(unsigned long long)hash;
-(BOOL)allowLowPrecisionAccumulationOnGPU;
-(void)setUseWatchSPIForScribble:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUsePreloadedKey:(BOOL)arg1 ;
-(NSURL *)rootModelURL;
-(BOOL)useWatchSPIForScribble;
-(long long)profilingOptions;
-(void)setPreferredMTLDevice:(id<MTLDevice>)arg1 ;
-(BOOL)usePreloadedKey;
-(void)setAllowBackgroundGPUComputeSetting:(BOOL)arg1 ;
-(void)setAllowBackgroundGPUCompute:(BOOL)arg1 ;
-(void)setAllowFloat16AccumulationOnGPU:(BOOL)arg1 ;
-(BOOL)enableTestVectorMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowFloat16AccumulationOnGPU;
-(id)computeUnitsToString:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualToModelConfiguration:(id)arg1 ;
@end

