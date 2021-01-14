/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)externalData;
-(HMBModel *)model;
-(void)setExternalData:(NSData *)arg1 ;
-(void)setExternalID:(NSData *)arg1 ;
-(NSData *)externalID;
-(id)attributeDescriptions;
-(unsigned long long)recordRow;
-(unsigned long long)outputBlockRow;
-(HMBLocalSQLQueryTable *)queryTable;
-(id)initWithOutputBlockRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 model:(id)arg3 queryTable:(id)arg4 externalID:(id)arg5 externalData:(id)arg6 ;
@end

