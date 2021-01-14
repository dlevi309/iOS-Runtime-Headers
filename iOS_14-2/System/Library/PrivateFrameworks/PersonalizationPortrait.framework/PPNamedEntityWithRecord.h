/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPNamedEntity.h>

@class PPNamedEntityRecord;

@interface PPNamedEntityWithRecord : PPNamedEntity {

	PPNamedEntityRecord* _mostRelevantRecord;

}
-(id)mostRelevantRecord;
-(double)sentimentScore;
-(id)description;
-(id)initWithName:(id)arg1 category:(unsigned long long)arg2 dynamicCategory:(id)arg3 language:(id)arg4 mostRelevantRecord:(id)arg5 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

