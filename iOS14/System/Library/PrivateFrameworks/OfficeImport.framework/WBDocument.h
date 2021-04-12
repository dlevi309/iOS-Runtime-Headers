/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBDocument : NSObject
+(void)setTimeStamp:(WrdDocumentProperties*)arg1 ;
+(id)readFrom:(id)arg1 ;
+(void)readProperties:(id)arg1 document:(id)arg2 ;
+(void)setupZIndices:(id)arg1 document:(id)arg2 escherType:(int)arg3 ;
+(void)readSectionsFrom:(id)arg1 document:(id)arg2 ;
+(void)readTextBoxesFrom:(id)arg1 ;
+(void)readNoteSeparatorFrom:(id)arg1 type:(int)arg2 separator:(id)arg3 ;
-(id)init;
-(id)applicationName;
@end

