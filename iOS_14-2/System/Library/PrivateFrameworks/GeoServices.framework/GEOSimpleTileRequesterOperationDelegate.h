/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOSimpleTileRequesterOperationDelegate <NSObject>
@required
-(BOOL)shouldAllowEmptyDataForTileKey:(const GEOTileKey*)arg1;
-(void)operationFinished:(id)arg1;
-(void)operationFailed:(id)arg1 error:(id)arg2;
-(id)verifyDataIntegrity:(id)arg1 checksumMethod:(int)arg2;
-(int)checksumMethodForIncomingTileDataWithKey:(const GEOTileKey*)arg1;

@end

