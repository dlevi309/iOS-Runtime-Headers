/*
* Generated on Monday, March 1, 2021 at 2:30:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTileDecoder <NSObject>
@required
-(BOOL)canDecodeTile:(const GEOTileKey*)arg1 quickly:(BOOL*)arg2;
-(id)decodeTile:(id)arg1 forKey:(const GEOTileKey*)arg2;

@end

