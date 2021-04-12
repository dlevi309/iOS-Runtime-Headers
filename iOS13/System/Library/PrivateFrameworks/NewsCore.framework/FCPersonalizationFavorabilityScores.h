/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPBFavorabilityScores:(id)arg1 ;
-(NSDictionary *)tagIDToScores;
-(id)scoreForTagID:(id)arg1 ;
-(void)setTagIDToScores:(NSDictionary *)arg1 ;
@end

