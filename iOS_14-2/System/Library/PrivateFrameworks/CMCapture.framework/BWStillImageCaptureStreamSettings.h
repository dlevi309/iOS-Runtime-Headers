/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol BWAdaptiveBracketingParameters;
@class NSString, BWBracketSettings, NSArray, NSDictionary, NSMutableArray;

@interface BWStillImageCaptureStreamSettings : NSObject <NSSecureCoding> {

	NSString* _portType;
	NSString* _sensorIDString;
	int _captureType;
	unsigned long long _captureFlags;
	BWBracketSettings* _bracketSettings;
	NSArray* _validBracketedCaptureSequenceNumbers;
	SCD_Struct_BW8 _preferredTimeMachinePTS;
	int _timeMachineFrameCount;
	int _referenceFrameIndex;
	NSArray* _timeMachineBracketedCaptureParams;
	NSDictionary* _preBracketFrameCaptureParams;
	NSArray* _unifiedBracketedCaptureParams;
	BOOL _lensStabilizationEnabledForClientBracket;
	os_unfair_lock_s _adaptiveBracketingLock;
	id<BWAdaptiveBracketingParameters> _adaptiveBracketingParameters;
	NSMutableArray* _adaptivePreBracketFrameCaptureParams;
	NSMutableArray* _adaptiveUnifiedBracketedCaptureParams;
	BOOL _reachedEndOfAdaptiveBracketing;
	SCD_Struct_BW8 _adaptiveBracketingLastFramePTS;

}

@property (nonatomic,readonly) NSString * portType;                                         //@synthesize portType=_portType - In the implementation block
@property (nonatomic,retain) NSString * sensorIDString;                                     //@synthesize sensorIDString=_sensorIDString - In the implementation block
@property (nonatomic,readonly) int captureType;                                             //@synthesize captureType=_captureType - In the implementation block
@property (nonatomic,readonly) unsigned long long captureFlags;                             //@synthesize captureFlags=_captureFlags - In the implementation block
@property (nonatomic,readonly) int timeMachineFrameCount;                                   //@synthesize timeMachineFrameCount=_timeMachineFrameCount - In the implementation block
@property (nonatomic,readonly) BWBracketSettings * bracketSettings;                         //@synthesize bracketSettings=_bracketSettings - In the implementation block
@property (nonatomic,readonly) NSArray * validBracketedCaptureSequenceNumbers;              //@synthesize validBracketedCaptureSequenceNumbers=_validBracketedCaptureSequenceNumbers - In the implementation block
@property (nonatomic,readonly) BOOL hasValidFrames; 
@property (nonatomic,readonly) int expectedFrameCount; 
@property (nonatomic,readonly) int expectedFrameCaptureCount; 
@property (assign,nonatomic) SCD_Struct_BW8 preferredTimeMachinePTS;                        //@synthesize preferredTimeMachinePTS=_preferredTimeMachinePTS - In the implementation block
@property (nonatomic,readonly) int expectedTimeMachineFrameCaptureCount; 
+(BOOL)supportsSecureCoding;
-(BOOL)lensStabilizationEnabledForClientBracket;
-(id)preBracketFrameCaptureParams;
-(void)setAdaptiveBracketingLastFramePTS:(SCD_Struct_BW8)arg1 ;
-(SCD_Struct_BW8)preferredTimeMachinePTS;
-(BWBracketSettings *)bracketSettings;
-(NSString *)portType;
-(int)expectedFrameCaptureCount;
-(int)currentExpectedAdaptiveBracketedFrameCaptureCount;
-(id)timeMachineBracketedCaptureParams;
-(id)adaptiveUnifiedBracketedCaptureParams;
-(SCD_Struct_BW8)adaptiveBracketingLastFramePTS;
-(int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)arg1 ;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 timeMachineFrameCount:(int)arg4 bracketSettings:(id)arg5 validBracketedCaptureSequenceNumbers:(id)arg6 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)reachedEndOfAdaptiveBracketing;
-(id)adaptiveBracketingParameters;
-(void)setLensStabilizationEnabledForClientBracket:(BOOL)arg1 ;
-(int)expectedTimeMachineFrameCaptureCount;
-(id)description;
-(int)referenceFrameIndex;
-(NSArray *)validBracketedCaptureSequenceNumbers;
-(BOOL)hasValidFrames;
-(void)setReachedEndOfAdaptiveBracketing:(BOOL)arg1 ;
-(id)unifiedBracketedCaptureParams;
-(int)captureType;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 timeMachineBracketedCaptureParams:(id)arg5 preBracketFrameCaptureParams:(id)arg6 unifiedBracketedCaptureParams:(id)arg7 validBracketedCaptureSequenceNumbers:(id)arg8 ;
-(unsigned long long)captureFlags;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 adaptiveBracketingParameters:(id)arg5 ;
-(int)timeMachineFrameCount;
-(int)adaptiveBracketingGroupCaptureCount;
-(int)expectedFrameCount;
-(void)setPreferredTimeMachinePTS:(SCD_Struct_BW8)arg1 ;
-(id)adaptivePreBracketFrameCaptureParams;
-(BOOL)isUnifiedBracketingErrorRecoveryFrame:(opaqueCMSampleBufferRef)arg1 isReferenceFrame:(BOOL)arg2 ;
-(NSString *)sensorIDString;
-(void)addAdaptiveUnifiedBracketedCaptureParams:(id)arg1 preBracketFrameCaptureParams:(id)arg2 ;
-(void)setSensorIDString:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

