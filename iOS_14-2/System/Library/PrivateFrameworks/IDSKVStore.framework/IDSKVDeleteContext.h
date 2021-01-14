/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSKVStore.framework/IDSKVStore
*/


@interface IDSKVDeleteContext : NSObject {

	char _valueType;
	unsigned long long _rowIDCutoff;

}

@property (assign,nonatomic) unsigned long long rowIDCutoff;              //@synthesize rowIDCutoff=_rowIDCutoff - In the implementation block
@property (assign,nonatomic) char valueType;                              //@synthesize valueType=_valueType - In the implementation block
-(char)valueType;
-(void)setValueType:(char)arg1 ;
-(unsigned long long)rowIDCutoff;
-(void)setRowIDCutoff:(unsigned long long)arg1 ;
@end

