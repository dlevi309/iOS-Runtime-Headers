/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>

@class NSString;

@interface BKSMousePointerDevicePreferences : NSObject <NSSecureCoding, BSProtobufSerializable> {

	BOOL _enableNaturalScrolling;
	BOOL _enableTapToClick;
	BOOL _enableTwoFingerSecondaryClick;
	float _pointerAccelerationFactor;
	float _scrollAccelerationFactor;
	long long _buttonConfigurationForHardwareButtonMice;
	long long _buttonConfigurationForVirtualButtonMice;

}

@property (assign,nonatomic) float pointerAccelerationFactor;                                 //@synthesize pointerAccelerationFactor=_pointerAccelerationFactor - In the implementation block
@property (assign,nonatomic) float scrollAccelerationFactor;                                  //@synthesize scrollAccelerationFactor=_scrollAccelerationFactor - In the implementation block
@property (assign,nonatomic) BOOL enableNaturalScrolling;                                     //@synthesize enableNaturalScrolling=_enableNaturalScrolling - In the implementation block
@property (assign,nonatomic) BOOL enableTapToClick;                                           //@synthesize enableTapToClick=_enableTapToClick - In the implementation block
@property (assign,nonatomic) BOOL enableTwoFingerSecondaryClick;                              //@synthesize enableTwoFingerSecondaryClick=_enableTwoFingerSecondaryClick - In the implementation block
@property (assign,nonatomic) long long buttonConfigurationForHardwareButtonMice;              //@synthesize buttonConfigurationForHardwareButtonMice=_buttonConfigurationForHardwareButtonMice - In the implementation block
@property (assign,nonatomic) long long buttonConfigurationForVirtualButtonMice;               //@synthesize buttonConfigurationForVirtualButtonMice=_buttonConfigurationForVirtualButtonMice - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
+(id)defaultPreferencesForHardwareType:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initForProtobufDecoding;
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(void)_fixMissingButtonConfigurations;
-(float)pointerAccelerationFactor;
-(void)setPointerAccelerationFactor:(float)arg1 ;
-(float)scrollAccelerationFactor;
-(void)setScrollAccelerationFactor:(float)arg1 ;
-(BOOL)enableNaturalScrolling;
-(void)setEnableNaturalScrolling:(BOOL)arg1 ;
-(BOOL)enableTapToClick;
-(void)setEnableTapToClick:(BOOL)arg1 ;
-(BOOL)enableTwoFingerSecondaryClick;
-(void)setEnableTwoFingerSecondaryClick:(BOOL)arg1 ;
-(long long)buttonConfigurationForHardwareButtonMice;
-(void)setButtonConfigurationForHardwareButtonMice:(long long)arg1 ;
-(long long)buttonConfigurationForVirtualButtonMice;
-(void)setButtonConfigurationForVirtualButtonMice:(long long)arg1 ;
@end

