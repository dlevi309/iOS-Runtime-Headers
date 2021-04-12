/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)CKPropertiesDescription;
-(NSMutableOrderedSet *)assetRecords;
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

