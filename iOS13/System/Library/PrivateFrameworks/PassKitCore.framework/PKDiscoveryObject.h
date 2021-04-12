/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, PKOSVersionRequirementRange, PKHardwareVersionRange, PKDiscoveryRelevantDateRange;

@interface PKDiscoveryObject : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	long long _version;
	NSString* _ruleIdentifier;
	NSArray* _triggers;
	PKOSVersionRequirementRange* _osVersionRange;
	PKHardwareVersionRange* _hardwareVersionRange;
	PKDiscoveryRelevantDateRange* _relevantDateRange;
	long long _maxViewCount;
	long long _status;
	long long _viewCount;

}

@property (nonatomic,copy) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) long long version;                                             //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSString * ruleIdentifier;                                       //@synthesize ruleIdentifier=_ruleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * triggers;                                            //@synthesize triggers=_triggers - In the implementation block
@property (nonatomic,retain) PKOSVersionRequirementRange * osVersionRange;                  //@synthesize osVersionRange=_osVersionRange - In the implementation block
@property (nonatomic,retain) PKHardwareVersionRange * hardwareVersionRange;                 //@synthesize hardwareVersionRange=_hardwareVersionRange - In the implementation block
@property (nonatomic,retain) PKDiscoveryRelevantDateRange * relevantDateRange;              //@synthesize relevantDateRange=_relevantDateRange - In the implementation block
@property (assign,nonatomic) long long maxViewCount;                                        //@synthesize maxViewCount=_maxViewCount - In the implementation block
@property (assign,nonatomic) long long status;                                              //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long viewCount;                                           //@synthesize viewCount=_viewCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSArray *)triggers;
-(long long)viewCount;
-(void)setViewCount:(long long)arg1 ;
-(void)incrementViewCount;
-(BOOL)isValidForTime:(id)arg1 ;
-(PKDiscoveryRelevantDateRange *)relevantDateRange;
-(BOOL)updateWithDiscoveryObject:(id)arg1 ;
-(BOOL)isTerminalStatus;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(BOOL)hasTriggers;
-(NSString *)ruleIdentifier;
-(PKOSVersionRequirementRange *)osVersionRange;
-(PKHardwareVersionRange *)hardwareVersionRange;
-(long long)maxViewCount;
-(void)updatedStatusForAction:(long long)arg1 ;
-(void)setRuleIdentifier:(NSString *)arg1 ;
-(void)setTriggers:(NSArray *)arg1 ;
-(void)setOsVersionRange:(PKOSVersionRequirementRange *)arg1 ;
-(void)setHardwareVersionRange:(PKHardwareVersionRange *)arg1 ;
-(void)setRelevantDateRange:(PKDiscoveryRelevantDateRange *)arg1 ;
-(void)setMaxViewCount:(long long)arg1 ;
@end

