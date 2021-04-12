/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOPDPlaceCollection, GEOPDAttribution, GEOMapItemAttribution, NSData, NSString;

@interface GEOPlaceCollection : NSObject {

	GEOPDPlaceCollection* _collection;
	GEOPDAttribution* _dataAttribution;
	GEOMapItemAttribution* _attribution;

}

@property (nonatomic,readonly) NSData * storageData; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * actionURLString; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) unsigned long long placeCount; 
+(id)placeCollectionForData:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(unsigned long long)muid;
-(void)loadAttribution;
-(id)initWithCollection:(id)arg1 attribution:(id)arg2 ;
-(unsigned long long)placeCount;
-(NSData *)storageData;
-(NSString *)actionURLString;
-(id)imageURLforSize:(CGSize)arg1 ;
@end

