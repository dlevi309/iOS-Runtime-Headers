/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PPLocation;

@interface PPScoredLocation : NSObject <NSCopying, NSSecureCoding> {

	PPLocation* _location;
	double _score;
	double _sentimentScore;

}

@property (nonatomic,readonly) PPLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double score;                       //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) double sentimentScore;              //@synthesize sentimentScore=_sentimentScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(double)sentimentScore;
-(double)score;
-(PPLocation *)location;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqualToScoredLocation:(id)arg1 ;
-(id)initWithLocation:(id)arg1 score:(double)arg2 sentimentScore:(double)arg3 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

