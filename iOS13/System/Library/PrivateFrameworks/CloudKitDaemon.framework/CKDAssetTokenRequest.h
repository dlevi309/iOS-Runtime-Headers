/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/


@class NSMutableArray, NSMutableSet;

@interface CKDAssetTokenRequest : NSObject {

	unsigned _size;
	unsigned _sizeUpperBound;
	NSMutableArray* _assetBatches;
	NSMutableSet* _failedAssetBatches;

}

@property (nonatomic,retain) NSMutableArray * assetBatches;                  //@synthesize assetBatches=_assetBatches - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedAssetBatches;              //@synthesize failedAssetBatches=_failedAssetBatches - In the implementation block
@property (assign,nonatomic) unsigned sizeUpperBound;                        //@synthesize sizeUpperBound=_sizeUpperBound - In the implementation block
@property (assign,nonatomic) unsigned size;                                  //@synthesize size=_size - In the implementation block
-(id)init;
-(id)description;
-(BOOL)isEmpty;
-(unsigned)size;
-(void)setSize:(unsigned)arg1 ;
-(id)CKPropertiesDescription;
-(unsigned)sizeUpperBound;
-(NSMutableArray *)assetBatches;
-(NSMutableSet *)failedAssetBatches;
-(void)addAssetBatch:(id)arg1 ;
-(void)addFailedBatch:(id)arg1 ;
-(BOOL)hasSuccessfulBatches;
-(id)successfulBatches;
-(void)setAssetBatches:(NSMutableArray *)arg1 ;
-(void)setFailedAssetBatches:(NSMutableSet *)arg1 ;
-(void)setSizeUpperBound:(unsigned)arg1 ;
@end

