/*
* Generated on Monday, March 1, 2021 at 2:32:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
*/


@class NSMutableArray;

@interface ABSMultiValue : NSObject {

	BOOL _mutable;
	unsigned _propertyType;
	NSMutableArray* _values;

}

@property (nonatomic,readonly) unsigned propertyType;                //@synthesize propertyType=_propertyType - In the implementation block
@property (nonatomic,readonly) BOOL mutable;                         //@synthesize mutable=_mutable - In the implementation block
@property (nonatomic,readonly) NSMutableArray * values;              //@synthesize values=_values - In the implementation block
+(void)initialize;
-(id)mutableCopy;
-(unsigned long long)_cfTypeID;
-(NSMutableArray *)values;
-(id)allValues;
-(unsigned)propertyType;
-(id)labelAtIndex:(long long)arg1 ;
-(int)identifierAtIndex:(long long)arg1 ;
-(id)initWithPropertyType:(unsigned)arg1 mutable:(BOOL)arg2 values:(id)arg3 ;
-(BOOL)mutable;
-(int)nextLegacyIdentifier;
-(id)copyValueAtIndex:(long long)arg1 ;
-(unsigned long long)indexForIdentifier:(int)arg1 ;
-(unsigned long long)indexOfValue:(id)arg1 ;
-(BOOL)addValue:(id)arg1 label:(id)arg2 outIdentifier:(int*)arg3 ;
-(BOOL)insertValue:(id)arg1 label:(id)arg2 atIndex:(long long)arg3 outIdentifier:(int*)arg4 ;
-(BOOL)removeValueAtIndex:(long long)arg1 ;
-(BOOL)replaceValue:(id)arg1 atIndex:(long long)arg2 ;
-(BOOL)replaceLabel:(id)arg1 atIndex:(long long)arg2 ;
@end

