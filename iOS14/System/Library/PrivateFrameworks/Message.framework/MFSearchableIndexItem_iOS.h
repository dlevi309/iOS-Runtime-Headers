/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDSearchableIndexItem.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSString;

@interface MFSearchableIndexItem_iOS : EDSearchableIndexItem <EFLoggable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionsSearchableItemWithMessage:(id)arg1 ;
+(id)log;
+(id)searchableIndexItemWithIdentifier:(id)arg1 message:(id)arg2 type:(long long)arg3 ;
+(id)searchableIndexItemsFromMessages:(id)arg1 type:(long long)arg2 ;
-(BOOL)shouldExcludeFromIndex;
-(void)setNeedsAllAttributesIndexingType;
-(BOOL)_shouldAutoDownloadAttachment:(id)arg1 ;
-(void)addAttachmentAttributesToAttributeSet:(id)arg1 ;
-(id)fetchIndexableAttachments;
-(void)preprocess;
@end

