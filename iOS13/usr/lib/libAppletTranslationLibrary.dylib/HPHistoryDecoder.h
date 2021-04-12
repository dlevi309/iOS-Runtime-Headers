/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


#import <libAppletTranslationLibrary.dylib/libAppletTranslationLibrary.dylib-Structs.h>
@interface HPHistoryDecoder : NSObject
+(id)getTransactionDate:(id)arg1 ;
+(unsigned short)getHistoryNumber:(id)arg1 ;
+(unsigned short)getTypeOfUse:(id)arg1 ;
+(SCD_Struct_HP3)getTransactionBalance:(id)arg1 ;
+(SCD_Struct_HP5)getSectorInformation:(id)arg1 ;
+(int)getTransactionAmount:(id)arg1 withPreviousBlock:(id)arg2 ;
+(id)_decodeShinkansenTrainDataWithBlock:(id)arg1 andBlock:(id)arg2 ;
+(SCD_Struct_HP3)getCommuterBalance:(id)arg1 ;
+(BOOL)getGreenCarTicketUsed:(id)arg1 ;
+(SCD_Struct_HP6)getInOutStation:(id)arg1 ;
+(BOOL)getIsBlackListed:(id)arg1 ;
+(id)parseSuicaHistoryBlocks:(id)arg1 withIDm:(id)arg2 ;
+(id)parseGreencarBlocks:(id)arg1 ;
+(id)parseShinkansenBlocks:(id)arg1 fromServiceCode:(unsigned short)arg2 ;
@end

