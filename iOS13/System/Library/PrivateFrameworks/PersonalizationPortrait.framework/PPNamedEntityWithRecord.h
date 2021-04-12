/*
* Generated on Monday, March 1, 2021 at 2:32:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPNamedEntity.h>

@class PPNamedEntityRecord;

@interface PPNamedEntityWithRecord : PPNamedEntity {

	PPNamedEntityRecord* _mostRelevantRecord;

}
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)sentimentScore;
-(id)initWithName:(id)arg1 category:(unsigned long long)arg2 language:(id)arg3 mostRelevantRecord:(id)arg4 ;
-(id)mostRelevantRecord;
@end

