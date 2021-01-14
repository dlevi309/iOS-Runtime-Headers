/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NWNetworkAdviceUpdate : NSObject <NSSecureCoding, NSCopying> {

	long long _level;
	NSArray* _applications;

}

@property (assign) long long level;                     //@synthesize level=_level - In the implementation block
@property (retain) NSArray * applications;              //@synthesize applications=_applications - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setApplications:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)applications;
-(id)description;
-(long long)level;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setLevel:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

