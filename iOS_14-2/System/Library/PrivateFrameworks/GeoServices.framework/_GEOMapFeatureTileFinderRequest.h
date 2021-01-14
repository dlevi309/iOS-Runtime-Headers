/*
* Generated on Thursday, January 14, 2021 at 2:21:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOMapFeatureAccessRequest.h>

@class GEOMapFeatureTileFinder, NSString;

@interface _GEOMapFeatureTileFinderRequest : NSObject <GEOMapFeatureAccessRequest> {

	GEOMapFeatureTileFinder* _tileFinder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithTileFinder:(id)arg1 ;
-(void)cancel;
@end

