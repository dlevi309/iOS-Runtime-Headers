/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUKeyValueStoreReader : NSObject {

	cdb _cdb;
	int _fd;
	Class _keyType;
	Class _valueType;

}
-(BOOL)openAtPath:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)close;
-(BOOL)enumerateKeyType:(Class)arg1 valueType:(Class)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)enumerateValuesForKey:(id)arg1 valueType:(Class)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_readObjectAtOffset:(unsigned)arg1 length:(unsigned)arg2 type:(Class)arg3 error:(id*)arg4 ;
-(BOOL)enumerateKeysAndValuesAndReturnError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)enumerateValuesForKey:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithKeyType:(Class)arg1 valueType:(Class)arg2 ;
-(id)valueForKey:(id)arg1 valueType:(Class)arg2 error:(id*)arg3 ;
-(BOOL)valueExistsForKey:(id)arg1 ;
-(void)dealloc;
@end

