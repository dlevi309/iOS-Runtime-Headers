/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, _CDContextualPredicate;

@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _mustWake;
	BOOL _isDeserialized;
	unsigned _qualityOfService;
	NSString* _identifier;
	_CDContextualPredicate* _predicate;
	_CDContextualPredicate* _dismissalPolicy;
	/*^block*/id _callback;
	unsigned long long _deviceSet;
	unsigned long long _deviceTypes;
	NSString* _clientIdentifier;
	NSString* _locationManagerEffectiveBundleID;
	NSString* _locationManagerEffectiveBundlePath;
	/*^block*/id _informativeCallback;

}

@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) _CDContextualPredicate * predicate;                       //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) _CDContextualPredicate * dismissalPolicy;                 //@synthesize dismissalPolicy=_dismissalPolicy - In the implementation block
@property (assign,nonatomic) unsigned long long deviceSet;                             //@synthesize deviceSet=_deviceSet - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL mustWake;                                            //@synthesize mustWake=_mustWake - In the implementation block
@property (assign,nonatomic) BOOL isDeserialized;                                      //@synthesize isDeserialized=_isDeserialized - In the implementation block
@property (nonatomic,copy) NSString * locationManagerEffectiveBundleID;                //@synthesize locationManagerEffectiveBundleID=_locationManagerEffectiveBundleID - In the implementation block
@property (nonatomic,copy) NSString * locationManagerEffectiveBundlePath;              //@synthesize locationManagerEffectiveBundlePath=_locationManagerEffectiveBundlePath - In the implementation block
@property (copy) id informativeCallback;                                               //@synthesize informativeCallback=_informativeCallback - In the implementation block
@property (copy,readonly) id callback;                                                 //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceTypes;                         //@synthesize deviceTypes=_deviceTypes - In the implementation block
@property (nonatomic,readonly) unsigned qualityOfService;                              //@synthesize qualityOfService=_qualityOfService - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 qualityOfService:(unsigned)arg7 callback:(/*^block*/id)arg8 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 qualityOfService:(unsigned)arg6 callback:(/*^block*/id)arg7 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(BOOL)arg6 callback:(/*^block*/id)arg7 ;
+(id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(BOOL)arg5 callback:(/*^block*/id)arg6 ;
+(id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
+(id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(/*^block*/id)arg3 ;
+(id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(/*^block*/id)arg4 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setPredicate:(_CDContextualPredicate *)arg1 ;
-(_CDContextualPredicate *)predicate;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned)qualityOfService;
-(id)callback;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(unsigned long long)deviceTypes;
-(id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(BOOL)arg7 callback:(/*^block*/id)arg8 ;
-(id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(BOOL)arg7 qualityOfService:(unsigned)arg8 informativeCallback:(/*^block*/id)arg9 ;
-(void)setLocationManagerEffectiveBundleID:(NSString *)arg1 ;
-(void)setLocationManagerEffectiveBundlePath:(NSString *)arg1 ;
-(BOOL)isMultiDeviceRegistration;
-(_CDContextualPredicate *)dismissalPolicy;
-(void)setDismissalPolicy:(_CDContextualPredicate *)arg1 ;
-(unsigned long long)deviceSet;
-(void)setDeviceSet:(unsigned long long)arg1 ;
-(BOOL)mustWake;
-(void)setMustWake:(BOOL)arg1 ;
-(BOOL)isDeserialized;
-(void)setIsDeserialized:(BOOL)arg1 ;
-(NSString *)locationManagerEffectiveBundleID;
-(NSString *)locationManagerEffectiveBundlePath;
-(id)informativeCallback;
-(void)setInformativeCallback:(id)arg1 ;
@end

