/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class CKDAssetBatch, NSMutableDictionary;

@interface CKDTransactionState : NSObject {

	CKDAssetBatch* _assetBatch;
	NSMutableDictionary* _itemByAssetId;

}

@property (nonatomic,retain) CKDAssetBatch * assetBatch;                       //@synthesize assetBatch=_assetBatch - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * itemByAssetId;              //@synthesize itemByAssetId=_itemByAssetId - In the implementation block
-(id)init;
-(CKDAssetBatch *)assetBatch;
-(void)setAssetBatch:(CKDAssetBatch *)arg1 ;
-(NSMutableDictionary *)itemByAssetId;
-(void)setItemByAssetId:(NSMutableDictionary *)arg1 ;
@end

