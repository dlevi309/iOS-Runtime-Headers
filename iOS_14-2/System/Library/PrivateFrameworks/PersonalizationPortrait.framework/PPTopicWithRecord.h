/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <PersonalizationPortrait/PPTopic.h>

@class PPTopicRecord;

@interface PPTopicWithRecord : PPTopic {

	PPTopicRecord* _mostRelevantRecord;

}
-(id)mostRelevantRecord;
-(double)sentimentScore;
-(id)initWithTopicIdentifier:(id)arg1 mostRelevantRecord:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

