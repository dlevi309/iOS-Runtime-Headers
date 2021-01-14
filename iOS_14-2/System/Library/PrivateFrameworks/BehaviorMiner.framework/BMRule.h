/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface BMRule : NSObject <NSSecureCoding> {

	NSSet* _antecedent;
	NSSet* _consequent;
	double _support;
	double _confidence;
	unsigned long long _basketCount;
	unsigned long long _absoluteSupport;
	unsigned long long _absoluteAntecedentSupport;
	unsigned long long _absoluteConsequentSupport;
	unsigned long long _uniqueDaysLastWeek;
	unsigned long long _uniqueDaysTotal;

}

@property (nonatomic,readonly) unsigned long long basketCount;                            //@synthesize basketCount=_basketCount - In the implementation block
@property (nonatomic,readonly) unsigned long long absoluteSupport;                        //@synthesize absoluteSupport=_absoluteSupport - In the implementation block
@property (nonatomic,readonly) unsigned long long absoluteAntecedentSupport;              //@synthesize absoluteAntecedentSupport=_absoluteAntecedentSupport - In the implementation block
@property (nonatomic,readonly) unsigned long long absoluteConsequentSupport;              //@synthesize absoluteConsequentSupport=_absoluteConsequentSupport - In the implementation block
@property (nonatomic,readonly) double lift; 
@property (nonatomic,readonly) double conviction; 
@property (nonatomic,readonly) double rulePowerFactor; 
@property (nonatomic,readonly) unsigned long long uniqueDaysLastWeek;                     //@synthesize uniqueDaysLastWeek=_uniqueDaysLastWeek - In the implementation block
@property (nonatomic,readonly) unsigned long long uniqueDaysTotal;                        //@synthesize uniqueDaysTotal=_uniqueDaysTotal - In the implementation block
@property (nonatomic,readonly) NSSet * antecedent;                                        //@synthesize antecedent=_antecedent - In the implementation block
@property (nonatomic,readonly) NSSet * consequent;                                        //@synthesize consequent=_consequent - In the implementation block
@property (nonatomic,readonly) double support;                                            //@synthesize support=_support - In the implementation block
@property (nonatomic,readonly) double confidence;                                         //@synthesize confidence=_confidence - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)confidence;
-(NSSet *)antecedent;
-(double)lift;
-(unsigned long long)absoluteSupport;
-(double)support;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)consequent;
-(BOOL)isEqual:(id)arg1 ;
-(double)conviction;
-(double)rulePowerFactor;
-(unsigned long long)uniqueDaysLastWeek;
-(unsigned long long)uniqueDaysTotal;
-(unsigned long long)absoluteAntecedentSupport;
-(unsigned long long)absoluteConsequentSupport;
-(unsigned long long)basketCount;
-(id)initWithAntecedent:(id)arg1 consequent:(id)arg2 support:(double)arg3 confidence:(double)arg4 basketCount:(unsigned long long)arg5 absoluteSupport:(unsigned long long)arg6 absoluteAntecedentSupport:(unsigned long long)arg7 absoluteConsequentSupport:(unsigned long long)arg8 uniqueDaysLastWeek:(unsigned long long)arg9 uniqueDaysTotal:(unsigned long long)arg10 ;
-(id)initWithAntecedent:(id)arg1 consequent:(id)arg2 support:(double)arg3 confidence:(double)arg4 basketCount:(unsigned long long)arg5 absoluteSupport:(unsigned long long)arg6 absoluteAntecedentSupport:(unsigned long long)arg7 absoluteConsequentSupport:(unsigned long long)arg8 ;
-(id)initWithAntecedent:(id)arg1 consequent:(id)arg2 support:(double)arg3 confidence:(double)arg4 ;
@end

