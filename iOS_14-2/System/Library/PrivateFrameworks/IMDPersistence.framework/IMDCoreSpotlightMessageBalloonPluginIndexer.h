/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/

#import <IMDPersistence/IMDCoreSpotlightBaseIndexer.h>
#import <IMDPersistence/IMDCoreSpotlightIndexer.h>

@class NSString;

@interface IMDCoreSpotlightMessageBalloonPluginIndexer : IMDCoreSpotlightBaseIndexer <IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(BOOL)arg3 metadataToUpdate:(id)arg4 ;
+(id)_newSummaryTextForPayloadData:(id)arg1 item:(id)arg2 ;
+(id)lpDescriptionCustomKey;
+(id)_pluginPayloadAttachmentPathsForItem:(id)arg1 ;
+(BOOL)_richLinkPluginHasRichContentForItem:(id)arg1 attachmentPaths:(id)arg2 ;
+(id)lpHasRichMediaCustomKey;
+(id)lpPluginPathsCustomKey;
@end

