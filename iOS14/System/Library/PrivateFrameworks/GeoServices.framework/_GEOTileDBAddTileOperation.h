/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOTileDBWriteOperation.h>

@class GEOTileData, NSString, NSUUID;

@interface _GEOTileDBAddTileOperation : NSObject <_GEOTileDBWriteOperation> {

	GEOTileKey _key;
	unsigned _tileSet;
	GEOTileData* _data;
	NSString* _ETag;
	unsigned char _reason;
	NSUUID* _externalResourceUUID;

}

@property (nonatomic,readonly) GEOTileKey* key; 
@property (nonatomic,readonly) unsigned char reason;                        //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(BOOL)canIncreaseDataSizeInDB;
-(void)performWithDB:(id)arg1 ;
-(id)initWithTileKey:(const GEOTileKey*)arg1 tileSet:(unsigned)arg2 data:(id)arg3 ETag:(id)arg4 reason:(unsigned char)arg5 externalResourceUUID:(id)arg6 ;
-(unsigned char)reason;
-(unsigned long long)sizeInBytes;
-(GEOTileKey*)key;
-(BOOL)isSupercededByOperation:(id)arg1 ;
@end

