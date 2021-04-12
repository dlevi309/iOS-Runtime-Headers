/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(FBSDisplayMode *)currentMode;
-(double)scale;
-(long long)tags;
-(id)uniqueIdentifier;
-(double)orientation;
-(id)uniqueID;
-(double)latency;
-(FBSDisplayIdentity *)identity;
-(CGRect)bounds;
-(unsigned)seed;
-(NSString *)deviceName;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned)displayID;
-(BOOL)isCarDisplay;
-(NSString *)hardwareIdentifier;
-(BOOL)isMainDisplay;
-(id)initWithCADisplay:(id)arg1 ;
-(NSSet *)availableModes;
-(CGSize)pixelSize;
-(BOOL)isOverscanned;
-(long long)overscanCompensation;
-(BOOL)isCloningSupported;
-(long long)colorGamut;
-(double)nativeOrientation;
-(double)refreshRate;
-(FBSDisplayMode *)preferredMode;
-(CGSize)safeOverscanRatio;
-(id)CADisplay;
-(BOOL)isExternal;
-(BOOL)isCarInstrumentsDisplay;
-(BOOL)expectsSecureRendering;
-(id)_nameForDisplayType;
-(CGPoint)renderingCenter;
-(BOOL)isMainRootDisplay;
-(id)_initWithIdentity:(id)arg1 hardwareIdentifier:(id)arg2 name:(id)arg3 deviceName:(id)arg4 seed:(unsigned)arg5 comparable:(BOOL)arg6 tags:(long long)arg7 currentMode:(id)arg8 preferredMode:(id)arg9 otherModes:(id)arg10 cloningSupported:(BOOL)arg11 overscanned:(BOOL)arg12 overscanCompensation:(long long)arg13 safeOverscanRatio:(CGSize)arg14 pixelSize:(CGSize)arg15 bounds:(CGRect)arg16 renderingCenter:(CGPoint)arg17 latency:(double)arg18 validityCheck:(long long)arg19 ;
-(id)_initWithImmutableDisplay:(id)arg1 originalDisplay:(id)arg2 assertIfInvalid:(BOOL)arg3 ;
-(id)initWithCADisplay:(id)arg1 isMainDisplay:(BOOL)arg2 ;
-(id)copyWithUniqueIdentifier:(id)arg1 ;
-(id)copyWithOverrideMode:(id)arg1 ;
-(long long)_nativeRotation;
-(id)laterConfiguration:(id)arg1 ;
-(id)copyForSecureRendering;
-(BOOL)isHiddenDisplay;
-(BOOL)wantsConnectionDebouncing;
-(id)caDisplay;
-(CGRect)referenceBounds;
-(CGPoint)nativeCenter;
-(BOOL)isConnected;
-(BOOL)supportsExtendedColor;
@end

