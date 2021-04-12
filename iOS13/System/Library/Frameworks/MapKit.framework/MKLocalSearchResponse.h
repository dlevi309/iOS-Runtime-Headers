/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


#import <MapKit/MapKit-Structs.h>
@class NSArray;

@interface MKLocalSearchResponse : NSObject {

	NSArray* _mapItems;
	SCD_Struct_MK13 _boundingRegion;

}

@property (nonatomic,readonly) NSArray * mapItems;                         //@synthesize mapItems=_mapItems - In the implementation block
@property (nonatomic,readonly) SCD_Struct_MK8 boundingRegion;              //@synthesize boundingRegion=_boundingRegion - In the implementation block
-(id)description;
-(id)_dictionaryRepresentation;
-(NSArray *)mapItems;
-(SCD_Struct_MK8)boundingRegion;
-(id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2 ;
@end

