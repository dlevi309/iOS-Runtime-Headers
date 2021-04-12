/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@protocol _GEOTileDBWriteOperation <NSObject>
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@required
-(unsigned long long)sizeInBytes;
-(void)performWithDB:(id)arg1;
-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg1;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4;

@end

