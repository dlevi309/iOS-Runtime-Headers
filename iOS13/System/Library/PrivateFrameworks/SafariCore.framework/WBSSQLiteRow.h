/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/


#import <SafariCore/SafariCore-Structs.h>
@interface WBSSQLiteRow : NSObject {

	sqlite3_stmtRef _handle;

}
-(id)init;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(int)intAtIndex:(unsigned long long)arg1 ;
-(long long)int64AtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(id)initWithStatement:(id)arg1 ;
-(BOOL)boolAtIndex:(unsigned long long)arg1 ;
-(id)initWithCurrentRowOfEnumerator:(id)arg1 ;
-(BOOL)_isNullAtIndex:(unsigned long long)arg1 ;
-(RawData*)uncopiedRawDataAtIndex:(unsigned long long)arg1 ;
-(id)uncopiedDataAtIndex:(unsigned long long)arg1 ;
-(id)debugDictionaryRepresentationWithStatement:(id)arg1 ;
@end

