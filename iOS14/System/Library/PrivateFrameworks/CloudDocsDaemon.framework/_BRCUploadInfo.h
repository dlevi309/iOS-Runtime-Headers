/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

