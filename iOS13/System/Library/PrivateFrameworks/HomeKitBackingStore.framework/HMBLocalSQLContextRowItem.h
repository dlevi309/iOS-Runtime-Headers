/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HomeKitBackingStore/HomeKitBackingStore-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowItem : HMFObject {

	unsigned long long _itemRow;
	NSData* _modelData;
	unsigned long long _modelEncoding;
	NSData* _externalID;
	NSData* _externalData;

}

@property (nonatomic,readonly) unsigned long long itemRow;                    //@synthesize itemRow=_itemRow - In the implementation block
@property (nonatomic,readonly) NSData * externalID;                           //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSData * externalData;                         //@synthesize externalData=_externalData - In the implementation block
@property (nonatomic,readonly) NSData * modelData;                            //@synthesize modelData=_modelData - In the implementation block
@property (nonatomic,readonly) unsigned long long modelEncoding;              //@synthesize modelEncoding=_modelEncoding - In the implementation block
-(id)description;
-(NSData *)externalID;
-(NSData *)externalData;
-(NSData *)modelData;
-(id)initWithItemRow:(unsigned long long)arg1 externalID:(id)arg2 externalData:(id)arg3 modelEncoding:(unsigned long long)arg4 modelData:(id)arg5 ;
-(unsigned long long)itemRow;
-(unsigned long long)modelEncoding;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 returning:(unsigned long long)arg2 ;
@end

