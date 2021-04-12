/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)log;
-(BOOL)shouldExcludeFromIndex;
-(void)setNeedsAllAttributesIndexingType;
-(BOOL)_shouldAutoDownloadAttachment:(id)arg1 ;
-(void)addAttachmentAttributesToAttributeSet:(id)arg1 ;
-(id)fetchIndexableAttachments;
@end

