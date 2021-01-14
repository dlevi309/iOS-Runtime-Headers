/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
*/

#import <CoreDuetContext/CoreDuetContext-Structs.h>
#import <CoreDuetContext/_CDContextualPredicate.h>
#import <libobjc.A.dylib/_CDDictionaryEncoding.h>

@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding> {

	NSString* _identifier;
	NSDictionary* _parameters;

}

@property (nonatomic,retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)predicateForForegroundApp;
+(id)predicateForUserIsArrivingAtHome;
+(id)predicateForFirstPartyWorkoutMatchingTypes:(id)arg1 states:(id)arg2 ;
+(id)predicateForIsConnectedToAudioBluetoothDevice;
+(id)predicateForNextAlarm;
+(id)predicates;
+(id)_predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3 ;
+(id)notPredicateWithSubpredicate:(id)arg1 identifier:(id)arg2 ;
+(id)predicateForIsConnectedToCar;
+(id)predicateForNetworkQualityBad;
+(id)andPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2 ;
+(id)predicateForPhotosAppBecameForeground;
+(id)predicateWithIdentifier:(id)arg1 ;
+(id)predicateForNetworkQualityFair;
+(id)predicateForBacklightOnStatus;
+(id)predicateForUserIsLeavingHome;
+(id)orPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2 ;
+(id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3 ;
+(id)_predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 identifier:(id)arg3 ;
+(id)_predicateForChangeAtKeyPath:(id)arg1 identifier:(id)arg2 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)plistDictionary;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 parameters:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithPlistDictionary:(id)arg1 ;
@end

