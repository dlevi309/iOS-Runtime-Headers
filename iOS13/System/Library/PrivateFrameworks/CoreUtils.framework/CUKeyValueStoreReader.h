/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUKeyValueStoreReader : NSObject {

	cdb _cdb;
	int _fd;
	Class _keyType;
	Class _valueType;

}
-(id)init;
-(void)dealloc;
-(void)close;
-(id)initWithKeyType:(Class)arg1 valueType:(Class)arg2 ;
-(BOOL)openAtPath:(id)arg1 error:(id*)arg2 ;
-(id)_readObjectAtOffset:(unsigned)arg1 length:(unsigned)arg2 type:(Class)arg3 error:(id*)arg4 ;
-(BOOL)enumerateKeysAndValuesAndReturnError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)enumerateKeyType:(Class)arg1 valueType:(Class)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)enumerateValuesForKey:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)enumerateValuesForKey:(id)arg1 valueType:(Class)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)valueExistsForKey:(id)arg1 ;
-(id)valueForKey:(id)arg1 error:(id*)arg2 ;
-(id)valueForKey:(id)arg1 valueType:(Class)arg2 error:(id*)arg3 ;
@end

