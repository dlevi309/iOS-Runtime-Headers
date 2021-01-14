/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned)size;
-(id)CKPropertiesDescription;
-(void)setSize:(unsigned)arg1 ;
-(id)description;
-(BOOL)isEmpty;
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

