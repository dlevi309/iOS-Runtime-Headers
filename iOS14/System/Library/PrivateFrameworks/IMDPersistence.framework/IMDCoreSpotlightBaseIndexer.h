/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/

#import <IMDPersistence/IMDCoreSpotlightIndexer.h>

@class NSString;

@interface IMDCoreSpotlightBaseIndexer : NSObject <IMDCoreSpotlightIndexer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)cancelIndexingForItem:(id)arg1 ;
+(void)indexItem:(id)arg1 withChat:(id)arg2 isReindexing:(BOOL)arg3 metadataToUpdate:(id)arg4 ;
+(id)auxiliaryItemsForPrimaryAttributes:(id)arg1 withItem:(id)arg2 chat:(id)arg3 isReindexing:(BOOL)arg4 ;
+(id)indexTypeCustomKey;
+(id)isFromMeCustomKey;
+(id)isBusinessChatCustomKey;
@end

