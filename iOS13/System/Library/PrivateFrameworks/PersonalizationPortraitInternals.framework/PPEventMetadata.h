/*
* Generated on Monday, March 1, 2021 at 2:33:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PPEventMetadata : NSObject <NSCopying> {

	unsigned long long _ocnt_precomputedHash;
	BOOL _shouldConsiderAlarms;
	NSDictionary* _titlesAndParticipants;
	double _earliestStartTime;

}

@property (nonatomic,readonly) NSDictionary * titlesAndParticipants;              //@synthesize titlesAndParticipants=_titlesAndParticipants - In the implementation block
@property (nonatomic,readonly) double earliestStartTime;                          //@synthesize earliestStartTime=_earliestStartTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldConsiderAlarms;                         //@synthesize shouldConsiderAlarms=_shouldConsiderAlarms - In the implementation block
+(id)eventMetadataWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)_hash;
-(id)initWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 ;
-(BOOL)isEqualToEventMetadata:(id)arg1 ;
-(NSDictionary *)titlesAndParticipants;
-(double)earliestStartTime;
-(BOOL)shouldConsiderAlarms;
@end

