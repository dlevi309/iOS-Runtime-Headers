/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData, HMBLocalSQLQueryTable;

@interface HMBMirrorOutputTuple : HMFObject {

	HMBModel* _model;
	NSData* _externalID;
	NSData* _externalData;
	HMBLocalSQLQueryTable* _queryTable;
	unsigned long long _recordRow;
	unsigned long long _outputBlockRow;

}

@property (readonly) unsigned long long recordRow;                              //@synthesize recordRow=_recordRow - In the implementation block
@property (readonly) unsigned long long outputBlockRow;                         //@synthesize outputBlockRow=_outputBlockRow - In the implementation block
@property (nonatomic,readonly) HMBModel * model;                                //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSData * externalID;                                 //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy) NSData * externalData;                               //@synthesize externalData=_externalData - In the implementation block
@property (nonatomic,readonly) HMBLocalSQLQueryTable * queryTable;              //@synthesize queryTable=_queryTable - In the implementation block
-(id)description;
-(HMBModel *)model;
-(NSData *)externalID;
-(void)setExternalID:(NSData *)arg1 ;
-(NSData *)externalData;
-(void)setExternalData:(NSData *)arg1 ;
-(unsigned long long)recordRow;
-(HMBLocalSQLQueryTable *)queryTable;
-(unsigned long long)outputBlockRow;
-(id)initWithOutputBlockRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 model:(id)arg3 queryTable:(id)arg4 externalID:(id)arg5 externalData:(id)arg6 ;
@end

