/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TPSExperiment : NSObject <NSCopying, NSSecureCoding> {

	long long _identifier;
	double _holdoutAllocation;
	long long _camp;

}

@property (assign,nonatomic) long long identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double holdoutAllocation;              //@synthesize holdoutAllocation=_holdoutAllocation - In the implementation block
@property (assign,nonatomic) long long camp;                        //@synthesize camp=_camp - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
-(long long)camp;
-(id)init;
-(void)setHoldoutAllocation:(double)arg1 ;
-(BOOL)updateCampIfNeeded;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(double)holdoutAllocation;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(long long)arg1 ;
-(long long)identifier;
-(BOOL)updateWithExperimentDictionary:(id)arg1 ;
-(void)setCamp:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

