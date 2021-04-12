/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKQuery, CKRecordZoneID, CKQueryCursor, NSArray, NSDictionary;

@interface CKQueryOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContent;
	BOOL _fetchAllResults;
	CKQuery* _query;
	CKRecordZoneID* _zoneID;
	CKQueryCursor* _cursor;
	unsigned long long _resultsLimit;
	NSArray* _desiredKeys;
	NSDictionary* _assetTransferOptionsByKey;

}

@property (nonatomic,retain) CKQuery * query;                                       //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                               //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) CKQueryCursor * cursor;                                //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned long long resultsLimit;                       //@synthesize resultsLimit=_resultsLimit - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                 //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                          //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL fetchAllResults;                                  //@synthesize fetchAllResults=_fetchAllResults - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByKey;              //@synthesize assetTransferOptionsByKey=_assetTransferOptionsByKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(CKQuery *)query;
-(CKRecordZoneID *)zoneID;
-(id)init;
-(BOOL)shouldFetchAssetContent;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)assetTransferOptionsByKey;
-(void)setAssetTransferOptionsByKey:(NSDictionary *)arg1 ;
-(BOOL)fetchAllResults;
-(void)setFetchAllResults:(BOOL)arg1 ;
-(void)setResultsLimit:(unsigned long long)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(NSArray *)desiredKeys;
-(CKQueryCursor *)cursor;
-(id)initWithCoder:(id)arg1 ;
-(void)setQuery:(CKQuery *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(unsigned long long)resultsLimit;
-(void)setCursor:(CKQueryCursor *)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
@end

