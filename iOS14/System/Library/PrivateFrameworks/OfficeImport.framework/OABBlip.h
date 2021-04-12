/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface OABBlip : NSObject
+(id)readBlipFromEshBlip:(EshBlip*)arg1 ;
+(id)delayedSubBlipWithMetafileInfo:(const EshMetafileBlipInfo*)arg1 ;
+(void)setMetafileBoundsFromPictData:(id)arg1 info:(EshMetafileBlipInfo*)arg2 ;
+(id)compressMetafileData:(id)arg1 info:(EshMetafileBlipInfo*)arg2 ;
+(void)writeEmptyBlipStoreEntry:(EshBSE*)arg1 ;
+(EshBlip*)writeBlip:(id)arg1 ;
+(id)readBlipFromBse:(id)arg1 ;
+(void)writeBlip:(id)arg1 toBlipStoreEntry:(EshBSE*)arg2 ;
+(int)blipTypeForBlipSignature:(int)arg1 ;
+(id)dibFileContentsWithDibBlipData:(const OcBinaryData*)arg1 ;
+(id)subBlipWithMetafileInfo:(const EshMetafileBlipInfo*)arg1 ;
@end

