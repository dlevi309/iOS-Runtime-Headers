/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSAttributeDescription;

@interface NSSQLBindVariable : NSObject {

	int _cd_rc;
	unsigned char _sqlType;
	unsigned _index;
	unsigned _flags;
	id _value;
	NSAttributeDescription* _attributeDescription;
	long long _int64;

}
-(unsigned long long)retainCount;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(id)value;
-(unsigned)index;
-(void)setValue:(id)arg1 ;
-(void)setIndex:(unsigned)arg1 ;
-(unsigned char)sqlType;
-(id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2 ;
-(id)initWithUnsignedInt:(unsigned)arg1 sqlType:(unsigned char)arg2 ;
-(id)attributeDescription;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3 ;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 attributeDescription:(id)arg3 allowCoercion:(BOOL)arg4 ;
-(void)setInt64:(long long)arg1 ;
-(void)setUnsignedInt:(unsigned)arg1 ;
-(long long)int64;
-(unsigned)unsignedInt;
-(void)setSQLType:(unsigned char)arg1 ;
-(BOOL)hasObjectValue;
-(BOOL)allowsCoercion;
@end

