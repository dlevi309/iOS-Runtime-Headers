/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	long long _computeUnits;
	id<MTLDevice> _preferredMetalDevice;
	NSDictionary* _parameters;
	NSURL* _rootModelURL;

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
@property (assign) long long computeUnits;                                    //@synthesize computeUnits=_computeUnits - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)computeUnitsToString:(long long)arg1 ;
-(id)initWithComputeUnits:(long long)arg1 ;
-(BOOL)allowFloat16AccumulationOnGPU;
-(void)setAllowFloat16AccumulationOnGPU:(BOOL)arg1 ;
-(id<MTLDevice>)preferredMTLDevice;
-(void)setPreferredMTLDevice:(id<MTLDevice>)arg1 ;
-(BOOL)allowBackgroundGPUCompute;
-(void)setAllowBackgroundGPUCompute:(BOOL)arg1 ;
-(BOOL)isEqualToModelConfiguration:(id)arg1 ;
-(long long)computeUnits;
-(void)setComputeUnits:(long long)arg1 ;
-(BOOL)allowBackgroundGPUComputeSetting;
-(void)setAllowBackgroundGPUComputeSetting:(BOOL)arg1 ;
-(BOOL)useWatchSPIForScribble;
-(void)setUseWatchSPIForScribble:(BOOL)arg1 ;
-(BOOL)allowLowPrecisionAccumulationOnGPU;
-(void)setAllowLowPrecisionAccumulationOnGPU:(BOOL)arg1 ;
-(id<MTLDevice>)preferredMetalDevice;
-(void)setPreferredMetalDevice:(id<MTLDevice>)arg1 ;
-(BOOL)enableTestVectorMode;
-(void)setEnableTestVectorMode:(BOOL)arg1 ;
-(NSURL *)rootModelURL;
-(void)setRootModelURL:(NSURL *)arg1 ;
@end

