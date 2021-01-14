/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKGeoJSONObject.h>

@class NSString, NSData, NSArray;

@interface MKGeoJSONFeature : NSObject <MKGeoJSONObject> {

	NSString* _identifier;
	NSData* _properties;
	NSArray* _geometry;

}

@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSData * properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,readonly) NSArray * geometry;                  //@synthesize geometry=_geometry - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)geometry;
-(NSData *)properties;
-(NSString *)identifier;
-(id)_initWithGeoJSONObject:(id)arg1 error:(id*)arg2 ;
-(id)_initWithProperties:(id)arg1 geometry:(id)arg2 identifier:(id)arg3 ;
@end

