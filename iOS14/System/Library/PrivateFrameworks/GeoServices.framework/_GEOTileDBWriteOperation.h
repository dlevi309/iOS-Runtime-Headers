/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol _GEOTileDBWriteOperation <NSObject>
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@required
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4;
-(BOOL)canIncreaseDataSizeInDB;
-(void)performWithDB:(id)arg1;
-(unsigned long long)sizeInBytes;
-(BOOL)isSupercededByOperation:(id)arg1;

@end

