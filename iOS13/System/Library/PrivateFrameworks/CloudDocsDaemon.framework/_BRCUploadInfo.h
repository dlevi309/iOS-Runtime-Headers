/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/_BRCTransferInfo.h>

@class NSMutableSet;

@interface _BRCUploadInfo : _BRCTransferInfo {

	NSMutableSet* _outOfQuotaDocIDs;

}

@property (nonatomic,readonly) NSMutableSet * outOfQuotaDocIDs;              //@synthesize outOfQuotaDocIDs=_outOfQuotaDocIDs - In the implementation block
@property (nonatomic,readonly) BOOL allUploadsPendingQuota; 
-(id)init;
-(id)description;
-(void)updateLocalizedDescriptionWithOptions:(char)arg1 ;
-(void)copyProgressInfoToProgress:(id)arg1 options:(char)arg2 ;
-(NSMutableSet *)outOfQuotaDocIDs;
-(BOOL)allUploadsPendingQuota;
@end

