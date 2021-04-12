/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSPropertyDescription;

@interface NSSQLBindVariable : NSObject {

	int _cd_rc;
	unsigned char _sqlType;
	unsigned _index;
	unsigned _flags;
	id _value;
	NSPropertyDescription* _propertyDescription;
	long long _int64;

}
-(unsigned)index;
-(oneway void)release;
-(BOOL)hasObjectValue;
-(BOOL)_tryRetain;
-(BOOL)allowsCoercion;
-(void)setIndex:(unsigned)arg1 ;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned)unsignedInt;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 ;
-(unsigned char)sqlType;
-(void)setSQLType:(unsigned char)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 sqlType:(unsigned char)arg2 propertyDescription:(id)arg3 allowCoercion:(BOOL)arg4 ;
-(id)initWithUnsignedInt:(unsigned)arg1 sqlType:(unsigned char)arg2 ;
-(void)setUnsignedInt:(unsigned)arg1 ;
-(unsigned long long)retainCount;
-(id)propertyDescription;
-(id)initWithInt64:(long long)arg1 sqlType:(unsigned char)arg2 ;
-(void)setInt64:(long long)arg1 ;
-(long long)int64;
-(id)value;
-(void)dealloc;
@end

