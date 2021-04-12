/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCEnumerationMap : NSObject {

	CFDictionaryRef m_valueToString;
	CFDictionaryRef m_stringToValue;
	BOOL m_caseSensitive;

}
-(id)stringForValue:(int)arg1 ;
-(void)dealloc;
-(id)initWithStructs:(const TCEnumerationStruct*)arg1 count:(int)arg2 caseSensitive:(BOOL)arg3 ;
-(id)initWithStructs:(const TCEnumerationStruct*)arg1 count:(int)arg2 ;
-(long long)valueForString:(id)arg1 ;
-(void)enumerateValuesAndStringsUsingBlock:(/*^block*/id)arg1 ;
@end

