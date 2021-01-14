/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/PPStringDonationProtocol.h>

@class SGTopicExtractionPlugin, SGNamedEntityExtractionPlugin;

@interface SGStringDonationHandler : NSObject <PPStringDonationProtocol> {

	SGTopicExtractionPlugin* _topicPlugin;
	SGNamedEntityExtractionPlugin* _namedEntityPlugin;

}
-(id)init;
-(void)donateLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)initWithTopicPlugin:(id)arg1 namedEntityPlugin:(id)arg2 ;
-(BOOL)_donateNotificationFromLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 error:(id*)arg5 ;
-(void)_donateNamedEntitiesFromLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 ;
-(void)_donateTopicsFromLabeledStrings:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 documentId:(id)arg4 ;
@end

