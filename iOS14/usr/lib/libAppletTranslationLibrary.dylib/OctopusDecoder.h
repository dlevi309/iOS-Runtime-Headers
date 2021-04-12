/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAppletTranslationLibrary.dylib
*/


@interface OctopusDecoder : NSObject
+(int)isBlackListed:(id)arg1 ;
+(id)getTransactionTypeStringFromCode:(unsigned char)arg1 andServiceProviderID:(unsigned char)arg2 ;
+(int)isTransitTransactionCode:(unsigned char)arg1 ;
+(id)getTransactionTypeModifierStringFromCode:(unsigned char)arg1 ;
+(BOOL)isTopUpTransaction:(unsigned char)arg1 ;
+(id)getTransitTransactionTypeNameFromCode:(unsigned char)arg1 andServiceProvider:(unsigned short)arg2 ;
+(id)getPurseBalance:(id)arg1 ;
+(id)parseTLOGBlock:(id)arg1 withBaseDate:(id)arg2 ;
+(id)injectTLOGAAVS:(id)arg1 withAAVSAmount:(id)arg2 andBalance:(id)arg3 ;
+(id)getLoyaltyBalance:(id)arg1 ;
+(id)getNegativeValueLimit:(id)arg1 ;
+(id)getBaseDate:(id)arg1 ;
+(id)getPhysicalID:(id)arg1 ;
+(id)getAAVSAmount:(id)arg1 ;
+(int)getEnRouteStatus:(id)arg1 ;
+(int)filterHistoryEntry:(id)arg1 ;
@end

