/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
*/


@class NSMutableDictionary;

@interface MFIMAPConnectionFlagSearchResults : NSObject {

	NSMutableDictionary* _uidsWithFlagMaskSet;
	NSMutableDictionary* _uidsWithoutFlagMaskSet;

}
-(id)init;
-(id)description;
-(void)cacheStateForUIDs:(id)arg1 mask:(unsigned long long)arg2 existenceSetsFlag:(BOOL)arg3 ;
-(id)copyResponseForUID:(unsigned long long)arg1 ;
-(id)_indexSetFromUIDs:(id)arg1 ;
-(unsigned long long)_flagsForUID:(unsigned long long)arg1 ;
@end

