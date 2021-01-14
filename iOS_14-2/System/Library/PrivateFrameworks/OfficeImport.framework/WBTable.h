/*
* Generated on Thursday, January 14, 2021 at 2:28:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTable : NSObject
+(void)initPropertiesFrom:(id)arg1 to:(id)arg2 in:(id)arg3 ;
+(void)readRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
+(BOOL)isTableFloating:(const WrdTableProperties*)arg1 tracked:(const WrdTableProperties*)arg2 ;
+(void)readFrom:(id)arg1 textRuns:(id)arg2 table:(id)arg3 ;
+(BOOL)tryToReadRowFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 ;
@end

