/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSHashTable, UIColor;

@interface CLKComplicationTemplate : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _metadata;
	NSHashTable* _activeClients;
	BOOL _finalized;
	BOOL _linkedOnOrAfterGrace;
	UIColor* _tintColor;
	long long _uiSensitivity;

}

@property (nonatomic,readonly) long long timeTravelUpdateFrequency; 
@property (getter=isLinkedOnOrAfterGrace,nonatomic,readonly) BOOL linkedOnOrAfterGrace;              //@synthesize linkedOnOrAfterGrace=_linkedOnOrAfterGrace - In the implementation block
@property (assign,setter=setUISensitivity:,nonatomic) long long uiSensitivity;                       //@synthesize uiSensitivity=_uiSensitivity - In the implementation block
@property (nonatomic,copy) UIColor * tintColor;                                                      //@synthesize tintColor=_tintColor - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)complicationTemplateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)validate;
-(void)_setProvidersPaused:(BOOL)arg1 ;
-(long long)timeTravelUpdateFrequency;
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateProgressProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateEmbeddedTemplateKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateIntegerKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFloatKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(long long)uiSensitivity;
-(void)_enumerateBOOLKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateDateKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateAllKeysWithBlock:(/*^block*/id)arg1 ;
-(id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(void)_enumerateScalarKeysWithBlock:(/*^block*/id)arg1 ;
-(void)beginUpdatesForClient:(id)arg1 ;
-(void)endUpdatesForClient:(id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(id)finalizedCopy;
-(CGSize)maxSizeForImageProviderKey:(id)arg1 ;
-(void)enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateProgressProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isLinkedOnOrAfterGrace;
-(void)setUISensitivity:(long long)arg1 ;
@end

