/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)score;
-(PPLocation *)location;
-(double)sentimentScore;
-(id)initWithLocation:(id)arg1 score:(double)arg2 sentimentScore:(double)arg3 ;
-(BOOL)isEqualToScoredLocation:(id)arg1 ;
@end

