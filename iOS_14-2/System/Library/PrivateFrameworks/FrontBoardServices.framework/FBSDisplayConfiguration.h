/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FBSDisplayIdentity, NSString, FBSDisplayMode, NSSet, CADisplay;

@interface FBSDisplayConfiguration : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSSecureCoding> {

	FBSDisplayIdentity* _identity;
	NSString* _hardwareIdentifier;
	NSString* _name;
	NSString* _deviceName;
	unsigned _noEqual_seed;
	BOOL _noEqual_comparable;
	int _pid;
	long long _tags;
	FBSDisplayMode* _currentMode;
	FBSDisplayMode* _preferredMode;
	NSSet* _otherModes;
	NSSet* _availableModes;
	BOOL _cloningSupported;
	BOOL _overscanned;
	long long _overscanCompensation;
	CGSize _overscanAmounts;
	CGSize _pixelSize;
	CGRect _bounds;
	CGPoint _renderingCenter;
	CADisplay* _caDisplay;
	double _latency;
	CGSize _safeOverscanRatio;

}

@property (nonatomic,readonly) unsigned seed;                                                          //@synthesize noEqual_seed=_noEqual_seed - In the implementation block
@property (nonatomic,readonly) long long tags;                                                         //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayIdentity * identity;                                     //@synthesize identity=_identity - In the implementation block
@property (getter=isMainDisplay,nonatomic,readonly) BOOL mainDisplay; 
@property (getter=isExternal,nonatomic,readonly) BOOL external; 
@property (getter=isCarDisplay,nonatomic,readonly) BOOL carDisplay; 
@property (getter=isCarInstrumentsDisplay,nonatomic,readonly) BOOL carInstrumentsDisplay; 
@property (nonatomic,copy,readonly) NSString * hardwareIdentifier;                                     //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName;                                             //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayMode * currentMode;                                      //@synthesize currentMode=_currentMode - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayMode * preferredMode; 
@property (nonatomic,copy,readonly) NSSet * availableModes;                                            //@synthesize availableModes=_availableModes - In the implementation block
@property (getter=isCloningSupported,nonatomic,readonly) BOOL cloningSupported;                        //@synthesize cloningSupported=_cloningSupported - In the implementation block
@property (getter=isOverscanned,nonatomic,readonly) BOOL overscanned;                                  //@synthesize overscanned=_overscanned - In the implementation block
@property (nonatomic,readonly) long long overscanCompensation;                                         //@synthesize overscanCompensation=_overscanCompensation - In the implementation block
@property (nonatomic,readonly) CGSize safeOverscanRatio;                                               //@synthesize safeOverscanRatio=_safeOverscanRatio - In the implementation block
@property (nonatomic,readonly) double nativeOrientation; 
@property (nonatomic,readonly) CGSize pixelSize;                                                       //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGRect bounds;                                                          //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) CGPoint renderingCenter;                                                //@synthesize renderingCenter=_renderingCenter - In the implementation block
@property (nonatomic,readonly) double refreshRate; 
@property (nonatomic,readonly) long long colorGamut; 
@property (nonatomic,readonly) double latency;                                                         //@synthesize latency=_latency - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(unsigned)seed;
-(BOOL)isConnected;
-(CGRect)bounds;
-(NSString *)hardwareIdentifier;
-(id)succinctDescription;
-(CGSize)safeOverscanRatio;
-(NSString *)deviceName;
-(FBSDisplayMode *)currentMode;
-(double)nativeOrientation;
-(long long)tags;
-(CGPoint)nativeCenter;
-(id)uniqueID;
-(double)refreshRate;
-(BOOL)isMainRootDisplay;
-(id)CADisplay;
-(id)init;
-(BOOL)isHiddenDisplay;
-(long long)colorGamut;
-(BOOL)isCloningSupported;
-(FBSDisplayIdentity *)identity;
-(id)laterConfiguration:(id)arg1 ;
-(id)copyWithOverrideMode:(id)arg1 ;
-(id)copyForSecureRendering;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(CGRect)referenceBounds;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(id)_initWithIdentity:(id)arg1 hardwareIdentifier:(id)arg2 name:(id)arg3 deviceName:(id)arg4 seed:(unsigned)arg5 comparable:(BOOL)arg6 tags:(long long)arg7 currentMode:(id)arg8 preferredMode:(id)arg9 otherModes:(id)arg10 cloningSupported:(BOOL)arg11 overscanned:(BOOL)arg12 overscanCompensation:(long long)arg13 safeOverscanRatio:(CGSize)arg14 pixelSize:(CGSize)arg15 bounds:(CGRect)arg16 renderingCenter:(CGPoint)arg17 latency:(double)arg18 validityCheck:(long long)arg19 ;
-(CGPoint)renderingCenter;
-(BOOL)expectsSecureRendering;
-(NSString *)name;
-(BOOL)supportsExtendedColor;
-(NSString *)description;
-(BOOL)isCarInstrumentsDisplay;
-(id)initWithCADisplay:(id)arg1 ;
-(double)latency;
-(unsigned)displayID;
-(NSSet *)availableModes;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)copyWithUniqueIdentifier:(id)arg1 ;
-(long long)type;
-(unsigned long long)hash;
-(long long)_nativeRotation;
-(double)orientation;
-(BOOL)isMainDisplay;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)wantsConnectionDebouncing;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(BOOL)isOverscanned;
-(FBSDisplayMode *)preferredMode;
-(BOOL)isExternal;
-(id)caDisplay;
-(id)_initWithImmutableDisplay:(id)arg1 originalDisplay:(id)arg2 assertIfInvalid:(BOOL)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)pixelSize;
-(id)_nameForDisplayType;
-(BOOL)isCarDisplay;
-(long long)overscanCompensation;
-(BOOL)isEqual:(id)arg1 ;
@end

