/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithBracketingMode:(int)arg1 ;
-(int)bracketingMode;
-(BOOL)providePreBracketedEV0;
-(BOOL)lensStabilizationEnabledForClientBracket;
-(NSArray *)exposureValues;
-(NSArray *)manualExposureBracketedCaptureParams;
-(NSDictionary *)oisBracketedCaptureParams;
-(int)bracketFrameCount;
-(void)setProvidePreBracketedEV0:(BOOL)arg1 ;
-(void)setLensStabilizationEnabledForClientBracket:(BOOL)arg1 ;
-(void)setExposureValues:(NSArray *)arg1 ;
-(void)setManualExposureBracketedCaptureParams:(NSArray *)arg1 ;
-(void)setOisBracketedCaptureParams:(NSDictionary *)arg1 ;
@end

