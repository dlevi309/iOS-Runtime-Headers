/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	long long _doubleTapDragMode;
	long long _buttonConfigurationForHardwareButtonMice;
	long long _buttonConfigurationForVirtualButtonMice;

}

@property (assign,nonatomic) float pointerAccelerationFactor;                                 //@synthesize pointerAccelerationFactor=_pointerAccelerationFactor - In the implementation block
@property (assign,nonatomic) float scrollAccelerationFactor;                                  //@synthesize scrollAccelerationFactor=_scrollAccelerationFactor - In the implementation block
@property (assign,nonatomic) BOOL enableNaturalScrolling;                                     //@synthesize enableNaturalScrolling=_enableNaturalScrolling - In the implementation block
@property (assign,nonatomic) BOOL enableTapToClick;                                           //@synthesize enableTapToClick=_enableTapToClick - In the implementation block
@property (assign,nonatomic) BOOL enableTwoFingerSecondaryClick;                              //@synthesize enableTwoFingerSecondaryClick=_enableTwoFingerSecondaryClick - In the implementation block
@property (assign,nonatomic) long long doubleTapDragMode;                                     //@synthesize doubleTapDragMode=_doubleTapDragMode - In the implementation block
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
-(id)didFinishProtobufDecodingWithError:(out id*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initForProtobufDecoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_fixMissingButtonConfigurations;
-(float)pointerAccelerationFactor;
-(void)setPointerAccelerationFactor:(float)arg1 ;
-(float)scrollAccelerationFactor;
-(BOOL)enableNaturalScrolling;
-(void)setScrollAccelerationFactor:(float)arg1 ;
-(void)setEnableNaturalScrolling:(BOOL)arg1 ;
-(BOOL)enableTapToClick;
-(void)setEnableTapToClick:(BOOL)arg1 ;
-(BOOL)enableTwoFingerSecondaryClick;
-(long long)doubleTapDragMode;
-(void)setEnableTwoFingerSecondaryClick:(BOOL)arg1 ;
-(void)setDoubleTapDragMode:(long long)arg1 ;
-(long long)buttonConfigurationForHardwareButtonMice;
-(void)setButtonConfigurationForHardwareButtonMice:(long long)arg1 ;
-(long long)buttonConfigurationForVirtualButtonMice;
-(void)setButtonConfigurationForVirtualButtonMice:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

