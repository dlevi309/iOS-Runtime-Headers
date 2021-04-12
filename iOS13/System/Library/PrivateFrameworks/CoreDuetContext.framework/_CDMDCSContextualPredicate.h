/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)predicates;
+(id)_predicateForChangeAtKeyPath:(id)arg1 identifier:(id)arg2 ;
+(id)_predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3 ;
+(id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3 ;
+(id)orPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2 ;
+(id)predicateForUserIsLeavingHome;
+(id)predicateForUserIsArrivingAtHome;
+(id)predicateForPhotosAppBecameForeground;
+(id)predicateForNetworkQualityFair;
+(id)predicateForNetworkQualityBad;
+(id)predicateForIsConnectedToCar;
+(id)predicateForIsConnectedToAudioBluetoothDevice;
+(id)predicateForBacklightOnStatus;
+(id)predicateForForegroundApp;
+(id)predicateForFirstPartyWorkoutMatchingTypes:(id)arg1 states:(id)arg2 ;
+(id)predicateWithIdentifier:(id)arg1 ;
+(id)_predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 identifier:(id)arg3 ;
+(id)notPredicateWithSubpredicate:(id)arg1 identifier:(id)arg2 ;
+(id)andPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)plistDictionary;
-(id)initWithPlistDictionary:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 parameters:(id)arg2 ;
@end

