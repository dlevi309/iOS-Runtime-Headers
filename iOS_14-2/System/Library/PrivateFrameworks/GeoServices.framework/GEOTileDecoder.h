/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol GEOTileDecoder <NSObject>
@required
-(BOOL)canDecodeTile:(const GEOTileKey*)arg1 quickly:(BOOL*)arg2;
-(id)decodeTile:(id)arg1 forKey:(const GEOTileKey*)arg2;

@end

