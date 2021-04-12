/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_PFAbstractString.h>

@interface _PFEncodedString : _PFAbstractString {

	int _cd_rc;
	unsigned _length;
	id _sourceData;

}
-(unsigned long long)cStringLength;
-(BOOL)isEqualToString:(id)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 ;
-(oneway void)release;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(id)init;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)length;
-(id)copy;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(const char*)UTF8String;
-(void)getCString:(char*)arg1 ;
-(BOOL)_isCString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

