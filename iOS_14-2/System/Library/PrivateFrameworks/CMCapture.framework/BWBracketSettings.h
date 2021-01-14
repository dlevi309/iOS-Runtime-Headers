/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface BWBracketSettings : NSObject <NSSecureCoding> {

	int _bracketingMode;
	BOOL _providePreBracketedEV0;
	BOOL _lensStabilizationEnabledForClientBracket;
	NSArray* _exposureValues;
	NSArray* _manualExposureBracketedCaptureParams;
	NSDictionary* _oisBracketedCaptureParams;

}

@property (nonatomic,readonly) int bracketingMode;                                       //@synthesize bracketingMode=_bracketingMode - In the implementation block
@property (nonatomic,readonly) int bracketFrameCount; 
@property (assign,nonatomic) BOOL providePreBracketedEV0;                                //@synthesize providePreBracketedEV0=_providePreBracketedEV0 - In the implementation block
@property (assign,nonatomic) BOOL lensStabilizationEnabledForClientBracket;              //@synthesize lensStabilizationEnabledForClientBracket=_lensStabilizationEnabledForClientBracket - In the implementation block
@property (nonatomic,copy) NSArray * exposureValues;                                     //@synthesize exposureValues=_exposureValues - In the implementation block
@property (nonatomic,copy) NSArray * manualExposureBracketedCaptureParams;               //@synthesize manualExposureBracketedCaptureParams=_manualExposureBracketedCaptureParams - In the implementation block
@property (nonatomic,copy) NSDictionary * oisBracketedCaptureParams;                     //@synthesize oisBracketedCaptureParams=_oisBracketedCaptureParams - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)bracketSettingsForBracketingMode:(int)arg1 ;
-(BOOL)lensStabilizationEnabledForClientBracket;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLensStabilizationEnabledForClientBracket:(BOOL)arg1 ;
-(id)description;
-(void)setExposureValues:(NSArray *)arg1 ;
-(void)setManualExposureBracketedCaptureParams:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)exposureValues;
-(int)bracketingMode;
-(NSDictionary *)oisBracketedCaptureParams;
-(BOOL)providePreBracketedEV0;
-(int)bracketFrameCount;
-(id)initWithBracketingMode:(int)arg1 ;
-(void)setProvidePreBracketedEV0:(BOOL)arg1 ;
-(void)setOisBracketedCaptureParams:(NSDictionary *)arg1 ;
-(NSArray *)manualExposureBracketedCaptureParams;
-(id)classesForExposureValues;
-(id)classesForManualExposureBracketedCaptureParams;
-(id)classesForOisBracketedCaptureParams;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

