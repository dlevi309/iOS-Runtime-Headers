/*
* Generated on Monday, March 1, 2021 at 2:35:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBDocument : NSObject
+(id)readFrom:(id)arg1 ;
+(void)setTimeStamp:(WrdDocumentProperties*)arg1 ;
+(void)readProperties:(id)arg1 document:(id)arg2 ;
+(void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3 ;
+(void)readSectionsFrom:(id)arg1 document:(id)arg2 ;
+(void)readTextBoxesFrom:(id)arg1 ;
+(void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3 ;
-(id)init;
-(id)applicationName;
@end

