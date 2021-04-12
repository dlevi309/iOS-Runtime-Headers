/*
* Generated on Monday, March 1, 2021 at 2:30:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTileRequesterDelegate
@required
-(void)tileRequesterFinished:(id)arg1;
-(void)tileRequester:(id)arg1 receivedError:(id)arg2 forKey:(GEOTileKey)arg3;
-(void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned)arg3 tileSetDB:(unsigned)arg4 tileSet:(id)arg5 etag:(id)arg6 forKey:(GEOTileKey)arg7 userInfo:(id)arg8;

@end

