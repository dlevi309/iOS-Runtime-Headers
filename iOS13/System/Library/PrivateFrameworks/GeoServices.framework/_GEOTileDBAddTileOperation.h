/*
* Generated on Monday, March 1, 2021 at 2:30:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOTileDBWriteOperation.h>

@class GEOTileData, NSString;

@interface _GEOTileDBAddTileOperation : NSObject <_GEOTileDBWriteOperation> {

	GEOTileKey _key;
	unsigned _tileSet;
	GEOTileData* _data;
	NSString* _ETag;
	unsigned char _reason;

}

@property (nonatomic,readonly) GEOTileKey* key; 
@property (nonatomic,readonly) unsigned char reason;                        //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
-(GEOTileKey*)key;
-(unsigned char)reason;
-(unsigned long long)sizeInBytes;
-(void)performWithDB:(id)arg1 ;
-(BOOL)canIncreaseDataSizeInDB;
-(BOOL)isSupercededByOperation:(id)arg1 ;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(id)initWithTileKey:(const GEOTileKey*)arg1 tileSet:(unsigned)arg2 data:(id)arg3 ETag:(id)arg4 reason:(unsigned char)arg5 ;
@end

