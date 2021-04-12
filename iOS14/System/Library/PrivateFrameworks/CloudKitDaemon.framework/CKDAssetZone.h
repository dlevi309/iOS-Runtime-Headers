/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKDAssetZoneKey, NSMutableOrderedSet, NSMutableDictionary;

@interface CKDAssetZone : NSObject {

	CKDAssetZoneKey* _assetZoneKey;
	NSMutableOrderedSet* _assetRecords;
	NSMutableDictionary* _assetRecordsByRecordID;

}

@property (nonatomic,retain) NSMutableOrderedSet * assetRecords;                        //@synthesize assetRecords=_assetRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetRecordsByRecordID;              //@synthesize assetRecordsByRecordID=_assetRecordsByRecordID - In the implementation block
@property (nonatomic,retain) CKDAssetZoneKey * assetZoneKey;                            //@synthesize assetZoneKey=_assetZoneKey - In the implementation block
-(id)CKPropertiesDescription;
-(NSMutableOrderedSet *)assetRecords;
-(id)description;
-(void)addMMCSItem:(id)arg1 ;
-(void)addRereferencedMMCSItem:(id)arg1 ;
-(void)addMMCSSectionItem:(id)arg1 ;
-(CKDAssetZoneKey *)assetZoneKey;
-(id)initWithAssetZoneKey:(id)arg1 ;
-(void)setAssetZoneKey:(CKDAssetZoneKey *)arg1 ;
-(void)setAssetRecords:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)assetRecordsByRecordID;
-(void)setAssetRecordsByRecordID:(NSMutableDictionary *)arg1 ;
@end

