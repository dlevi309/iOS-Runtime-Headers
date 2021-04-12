/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


#import <SafariCore/SafariCore-Structs.h>
@interface WBSSQLiteRow : NSObject {

	sqlite3_stmtRef _handle;

}
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)initWithStatement:(id)arg1 ;
-(id)initWithCurrentRowOfEnumerator:(id)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(id)init;
-(id)uncopiedDataAtIndex:(unsigned long long)arg1 ;
-(int)intAtIndex:(unsigned long long)arg1 ;
-(RawData*)uncopiedRawDataAtIndex:(unsigned long long)arg1 ;
-(BOOL)boolAtIndex:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)debugDictionaryRepresentationWithStatement:(id)arg1 ;
-(BOOL)_isNullAtIndex:(unsigned long long)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
@end

