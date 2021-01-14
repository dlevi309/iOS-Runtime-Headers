/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOTileKeyList, GEOTileRequester;

@interface GEOTileServerLocalProxyBatchContext : NSObject {

	GEOTileKeyList* _fullList;
	GEOTileKeyList* _interestList;
	GEOTileKeyList* _networkList;
	GEOTileKeyList* _pendingNetworkList;
	GEOTileKeyList* _cacheMissNoDataList;
	GEOTileKeyList* _cacheMissStaleDataList;
	GEOTileKeyList* _cacheMissStaleUnusableDataList;
	unsigned char _loadReason;
	GEOTileRequester* _tileRequester;

}

@property (nonatomic,retain) GEOTileKeyList * fullList;                                    //@synthesize fullList=_fullList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * interestList;                                //@synthesize interestList=_interestList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * networkList;                                 //@synthesize networkList=_networkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * pendingNetworkList;                          //@synthesize pendingNetworkList=_pendingNetworkList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * cacheMissNoDataList;                         //@synthesize cacheMissNoDataList=_cacheMissNoDataList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * cacheMissStaleDataList;                      //@synthesize cacheMissStaleDataList=_cacheMissStaleDataList - In the implementation block
@property (nonatomic,retain) GEOTileKeyList * cacheMissStaleUnusableDataList;              //@synthesize cacheMissStaleUnusableDataList=_cacheMissStaleUnusableDataList - In the implementation block
@property (assign,nonatomic) unsigned char loadReason;                                     //@synthesize loadReason=_loadReason - In the implementation block
@property (nonatomic,retain) GEOTileRequester * tileRequester;                             //@synthesize tileRequester=_tileRequester - In the implementation block
-(unsigned char)loadReason;
-(void)setLoadReason:(unsigned char)arg1 ;
-(void)setCacheMissStaleUnusableDataList:(GEOTileKeyList *)arg1 ;
-(void)setCacheMissNoDataList:(GEOTileKeyList *)arg1 ;
-(void)setNetworkList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)pendingNetworkList;
-(void)setFullList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)cacheMissStaleDataList;
-(GEOTileKeyList *)fullList;
-(void)setPendingNetworkList:(GEOTileKeyList *)arg1 ;
-(void)setTileRequester:(GEOTileRequester *)arg1 ;
-(GEOTileKeyList *)cacheMissNoDataList;
-(void)setInterestList:(GEOTileKeyList *)arg1 ;
-(GEOTileRequester *)tileRequester;
-(GEOTileKeyList *)networkList;
-(GEOTileKeyList *)cacheMissStaleUnusableDataList;
-(void)setCacheMissStaleDataList:(GEOTileKeyList *)arg1 ;
-(GEOTileKeyList *)interestList;
@end

