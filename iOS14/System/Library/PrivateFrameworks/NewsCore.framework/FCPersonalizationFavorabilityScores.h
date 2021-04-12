/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NTPBPublisherFavorabilityScores, NSDictionary;

@interface FCPersonalizationFavorabilityScores : NSObject <NSSecureCoding> {

	NTPBPublisherFavorabilityScores* _pbFavorabilityScores;
	NSDictionary* _tagIDToScores;

}

@property (nonatomic,retain) NSDictionary * tagIDToScores;              //@synthesize tagIDToScores=_tagIDToScores - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)tagIDToScores;
-(id)scoreForTagID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPBFavorabilityScores:(id)arg1 ;
-(void)setTagIDToScores:(NSDictionary *)arg1 ;
@end

