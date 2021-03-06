/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class SXDataRecordStore;

@interface SXDataTableSelectorValidator : NSObject {

	SXDataRecordStore* _recordStore;
	unsigned long long _dataOrientation;

}

@property (nonatomic,readonly) SXDataRecordStore * recordStore;                 //@synthesize recordStore=_recordStore - In the implementation block
@property (nonatomic,readonly) unsigned long long dataOrientation;              //@synthesize dataOrientation=_dataOrientation - In the implementation block
-(SXDataRecordStore *)recordStore;
-(unsigned long long)dataOrientation;
-(id)initWithRecordStore:(id)arg1 dataOrientation:(unsigned long long)arg2 ;
-(BOOL)validateRowSelector:(id)arg1 forRowIndex:(unsigned long long)arg2 ;
-(BOOL)validateColumnSelector:(id)arg1 forColumnIndex:(unsigned long long)arg2 ;
-(BOOL)validateCellSelector:(id)arg1 forIndexPath:(NSRange)arg2 ;
-(id)conditionEngineForSelector:(id)arg1 forIndexPath:(NSRange)arg2 ;
-(id)descriptorForIndexPath:(NSRange)arg1 ;
@end

