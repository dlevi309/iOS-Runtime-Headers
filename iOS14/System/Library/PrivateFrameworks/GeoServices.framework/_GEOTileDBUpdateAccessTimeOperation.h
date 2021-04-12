/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/_GEOTileDBWriteOperation.h>

@class NSString;

@interface _GEOTileDBUpdateAccessTimeOperation : NSObject <_GEOTileDBWriteOperation> {

	GEOTileKey _key;
	double _timestamp;

}

@property (nonatomic,readonly) GEOTileKey* key; 
@property (nonatomic,readonly) unsigned long long sizeInBytes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
-(BOOL)canIncreaseDataSizeInDB;
-(void)performWithDB:(id)arg1 ;
-(unsigned long long)sizeInBytes;
-(GEOTileKey*)key;
-(BOOL)isSupercededByOperation:(id)arg1 ;
-(id)initWithTileKey:(const GEOTileKey*)arg1 timestamp:(double)arg2 ;
@end

