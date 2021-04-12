/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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
	SCD_Struct_BW2 _preferredTimeMachinePTS;
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
@property (assign,nonatomic) SCD_Struct_BW2 preferredTimeMachinePTS;                        //@synthesize preferredTimeMachinePTS=_preferredTimeMachinePTS - In the implementation block
@property (nonatomic,readonly) int expectedTimeMachineFrameCaptureCount; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)portType;
-(BWBracketSettings *)bracketSettings;
-(unsigned long long)captureFlags;
-(int)captureType;
-(int)expectedTimeMachineFrameCaptureCount;
-(int)expectedFrameCaptureCount;
-(int)timeMachineFrameCount;
-(BOOL)lensStabilizationEnabledForClientBracket;
-(void)setLensStabilizationEnabledForClientBracket:(BOOL)arg1 ;
-(NSString *)sensorIDString;
-(BOOL)hasValidFrames;
-(id)adaptiveBracketingParameters;
-(id)unifiedBracketedCaptureParams;
-(int)adaptiveBracketingGroupCaptureCount;
-(BOOL)reachedEndOfAdaptiveBracketing;
-(int)referenceFrameIndex;
-(int)expectedFrameCount;
-(BOOL)isUnifiedBracketingErrorRecoveryFrame:(opaqueCMSampleBufferRef)arg1 isReferenceFrame:(BOOL)arg2 ;
-(int)currentExpectedAdaptiveBracketedFrameCaptureCount;
-(int)expectedAdaptiveBracketedFrameCaptureCountUsingGroup:(int)arg1 ;
-(id)timeMachineBracketedCaptureParams;
-(NSArray *)validBracketedCaptureSequenceNumbers;
-(SCD_Struct_BW2)preferredTimeMachinePTS;
-(id)preBracketFrameCaptureParams;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 timeMachineFrameCount:(int)arg4 bracketSettings:(id)arg5 validBracketedCaptureSequenceNumbers:(id)arg6 ;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 timeMachineBracketedCaptureParams:(id)arg5 preBracketFrameCaptureParams:(id)arg6 unifiedBracketedCaptureParams:(id)arg7 validBracketedCaptureSequenceNumbers:(id)arg8 ;
-(id)initWithPortType:(id)arg1 captureType:(int)arg2 captureFlags:(unsigned long long)arg3 referenceFrameIndex:(int)arg4 adaptiveBracketingParameters:(id)arg5 ;
-(id)adaptivePreBracketFrameCaptureParams;
-(id)adaptiveUnifiedBracketedCaptureParams;
-(void)setReachedEndOfAdaptiveBracketing:(BOOL)arg1 ;
-(void)addAdaptiveUnifiedBracketedCaptureParams:(id)arg1 preBracketFrameCaptureParams:(id)arg2 ;
-(void)setSensorIDString:(NSString *)arg1 ;
-(void)setPreferredTimeMachinePTS:(SCD_Struct_BW2)arg1 ;
@end

