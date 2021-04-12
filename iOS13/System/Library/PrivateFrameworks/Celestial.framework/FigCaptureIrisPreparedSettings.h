/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/Celestial-Structs.h>
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)HDRMode;
-(int)digitalFlashMode;
-(void)setHDRMode:(int)arg1 ;
-(void)setDigitalFlashMode:(int)arg1 ;
-(void)setOutputWidth:(unsigned)arg1 ;
-(void)setOutputHeight:(unsigned)arg1 ;
-(long long)settingsID;
-(void)setSettingsID:(long long)arg1 ;
-(unsigned)outputWidth;
-(unsigned)outputHeight;
-(void)setQualityPrioritization:(int)arg1 ;
-(int)qualityPrioritization;
-(void)setRawOutputFormat:(unsigned)arg1 ;
-(void)setBravoConstituentImageDeliveryDeviceTypes:(NSArray *)arg1 ;
-(unsigned)bracketedImageCount;
-(void)setBracketedImageCount:(unsigned)arg1 ;
-(unsigned)processedOutputFormat;
-(void)setProcessedOutputFormat:(unsigned)arg1 ;
-(unsigned)rawOutputFormat;
-(NSArray *)bravoConstituentImageDeliveryDeviceTypes;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)figCaptureStillImageSettingsRepresentation;
@end

