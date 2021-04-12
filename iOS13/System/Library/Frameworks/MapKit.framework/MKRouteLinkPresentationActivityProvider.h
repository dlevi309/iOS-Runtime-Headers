/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKRouteActivityProvider.h>
#import <libobjc.A.dylib/MKActivityItemLinkPresentationSource.h>

@class GEOComposedRoute, LPLinkMetadata, NSString;

@interface MKRouteLinkPresentationActivityProvider : MKRouteActivityProvider <MKActivityItemLinkPresentationSource> {

	GEOComposedRoute* _composedRoute;
	LPLinkMetadata* _cachedMetadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3 ;
-(id)mapMetadataSpecialization;
@end

