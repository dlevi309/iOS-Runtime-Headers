/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@interface QPHistoryDecoder : NSObject
+(id)getTransactionDate:(id)arg1 ;
+(id)getTransactionAmount:(id)arg1 ;
+(unsigned short)getHistoryNumber:(id)arg1 ;
+(id)getDPAN:(id)arg1 ;
+(unsigned short)getTypeOfUse:(id)arg1 ;
+(unsigned short)getExpirationDate:(id)arg1 ;
+(id)generateEndEventFromHCI:(id)arg1 withTransceiver:(id)arg2 ;
+(id)parseQuickPayHistoryBlocks:(id)arg1 ;
+(unsigned short)getATC:(id)arg1 ;
@end

