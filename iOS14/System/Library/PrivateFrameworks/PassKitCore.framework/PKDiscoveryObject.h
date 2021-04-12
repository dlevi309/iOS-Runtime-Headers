/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)incrementViewCount;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)maxViewCount;
-(void)updatedStatusForAction:(long long)arg1 ;
-(PKHardwareVersionRange *)hardwareVersionRange;
-(id)initWithDictionary:(id)arg1 ;
-(void)setHardwareVersionRange:(PKHardwareVersionRange *)arg1 ;
-(void)setOsVersionRange:(PKOSVersionRequirementRange *)arg1 ;
-(void)setRelevantDateRange:(PKDiscoveryRelevantDateRange *)arg1 ;
-(NSArray *)triggers;
-(id)description;
-(void)setMaxViewCount:(long long)arg1 ;
-(void)setRuleIdentifier:(NSString *)arg1 ;
-(long long)viewCount;
-(PKOSVersionRequirementRange *)osVersionRange;
-(void)setViewCount:(long long)arg1 ;
-(PKDiscoveryRelevantDateRange *)relevantDateRange;
-(BOOL)updateWithDiscoveryObject:(id)arg1 ;
-(BOOL)isTerminalStatus;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(BOOL)hasTriggers;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isValidForTime:(id)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setVersion:(long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)ruleIdentifier;
-(long long)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)status;
-(void)setTriggers:(NSArray *)arg1 ;
@end

