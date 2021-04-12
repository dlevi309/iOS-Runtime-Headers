/*
* Generated on Thursday, January 14, 2021 at 2:21:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSArray, GEOMapItemIdentifier, NSString;

@interface GEOPlacePhotoLookupResult : NSObject {

	NSRange _originalRange;
	NSArray* _photos;
	GEOMapItemIdentifier* _mapItemIdentifier;
	NSString* _vendorIdentifier;
	unsigned long long _totalPhotoCount;

}

@property (nonatomic,readonly) NSArray * photos;                                      //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) long long nextStartIndex; 
@property (nonatomic,readonly) GEOMapItemIdentifier * mapItemIdentifier;              //@synthesize mapItemIdentifier=_mapItemIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * vendorIdentifier;                           //@synthesize vendorIdentifier=_vendorIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long totalPhotoCount;                    //@synthesize totalPhotoCount=_totalPhotoCount - In the implementation block
-(NSArray *)photos;
-(id)initWithVendorIdentifier:(id)arg1 place:(id)arg2 mapItemItemIdentifier:(id)arg3 originalRange:(NSRange)arg4 ;
-(NSString *)vendorIdentifier;
-(long long)nextStartIndex;
-(GEOMapItemIdentifier *)mapItemIdentifier;
-(unsigned long long)totalPhotoCount;
@end

