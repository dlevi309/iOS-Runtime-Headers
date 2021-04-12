/*
* Generated on Thursday, January 14, 2021 at 2:23:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying> {

	long long _settingsID;
	unsigned _processedOutputFormat;
	unsigned _rawOutputFormat;
	unsigned _outputWidth;
	unsigned _outputHeight;
	unsigned _bracketedImageCount;
	int _qualityPrioritization;
	int _HDRMode;
	int _digitalFlashMode;
	NSArray* _bravoConstituentImageDeliveryDeviceTypes;

}

@property (assign,nonatomic) long long settingsID;                                          //@synthesize settingsID=_settingsID - In the implementation block
@property (assign,nonatomic) unsigned processedOutputFormat;                                //@synthesize processedOutputFormat=_processedOutputFormat - In the implementation block
@property (assign,nonatomic) unsigned rawOutputFormat;                                      //@synthesize rawOutputFormat=_rawOutputFormat - In the implementation block
@property (assign,nonatomic) unsigned outputWidth;                                          //@synthesize outputWidth=_outputWidth - In the implementation block
@property (assign,nonatomic) unsigned outputHeight;                                         //@synthesize outputHeight=_outputHeight - In the implementation block
@property (assign,nonatomic) unsigned bracketedImageCount;                                  //@synthesize bracketedImageCount=_bracketedImageCount - In the implementation block
@property (assign,nonatomic) int qualityPrioritization;                                     //@synthesize qualityPrioritization=_qualityPrioritization - In the implementation block
@property (assign,nonatomic) int HDRMode;                                                   //@synthesize HDRMode=_HDRMode - In the implementation block
@property (assign,nonatomic) int digitalFlashMode;                                          //@synthesize digitalFlashMode=_digitalFlashMode - In the implementation block
@property (nonatomic,copy) NSArray * bravoConstituentImageDeliveryDeviceTypes;              //@synthesize bravoConstituentImageDeliveryDeviceTypes=_bravoConstituentImageDeliveryDeviceTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDigitalFlashMode:(int)arg1 ;
-(void)setHDRMode:(int)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setProcessedOutputFormat:(unsigned)arg1 ;
-(unsigned)outputWidth;
-(unsigned)outputHeight;
-(id)init;
-(int)qualityPrioritization;
-(NSArray *)bravoConstituentImageDeliveryDeviceTypes;
-(id)figCaptureStillImageSettingsRepresentation;
-(unsigned)processedOutputFormat;
-(void)setBravoConstituentImageDeliveryDeviceTypes:(NSArray *)arg1 ;
-(void)setOutputWidth:(unsigned)arg1 ;
-(int)HDRMode;
-(void)setRawOutputFormat:(unsigned)arg1 ;
-(void)setSettingsID:(long long)arg1 ;
-(NSString *)description;
-(void)setQualityPrioritization:(int)arg1 ;
-(unsigned)bracketedImageCount;
-(unsigned)rawOutputFormat;
-(void)setBracketedImageCount:(unsigned)arg1 ;
-(long long)settingsID;
-(int)digitalFlashMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setOutputHeight:(unsigned)arg1 ;
@end

