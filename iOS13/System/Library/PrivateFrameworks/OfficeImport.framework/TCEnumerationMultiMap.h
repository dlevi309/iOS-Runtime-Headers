/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCEnumerationMultiMap : NSObject {

	CFDictionaryRef m_valueToString;
	CFDictionaryRef m_stringToValue;
	BOOL m_caseSensitive;

}
-(void)dealloc;
-(id)stringForValue:(int)arg1 ;
-(id)initWithStructs:(const TCEnumerationStruct*)arg1 count:(int)arg2 caseSensitive:(BOOL)arg3 ;
-(id)initWithStructs:(const TCEnumerationStruct*)arg1 count:(int)arg2 ;
-(long long)valueForString:(id)arg1 ;
@end

