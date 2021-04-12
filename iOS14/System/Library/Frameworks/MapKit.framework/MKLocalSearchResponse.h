/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray;

@interface MKLocalSearchResponse : NSObject {

	NSArray* _mapItems;
	SCD_Struct_MK15 _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK9 boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
-(NSArray *)mapItems;
-(id)_dictionaryRepresentation;
-(id)description;
-(SCD_Struct_MK9)boundingRegion;
@end

