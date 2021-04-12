/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

