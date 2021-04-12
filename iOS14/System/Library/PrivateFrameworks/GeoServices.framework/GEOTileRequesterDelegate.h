/*
* Generated on Thursday, January 14, 2021 at 2:20:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTileRequesterDelegate
@required
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSetDB:(unsigned)arg4 tileSet:(id)arg5 etag:(id)arg6 forKey:(GEOTileKey)arg7 userInfo:(id)arg8;
-(void)tileRequesterFinished:(id)arg1;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 forKey:(GEOTileKey)arg3;

@end

