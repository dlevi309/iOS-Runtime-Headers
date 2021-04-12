/*
* Generated on Thursday, January 14, 2021 at 2:22:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKRouteActivityProvider.h>
#import <UIKit/UIActivityItemLinkPresentationSource.h>

@class GEOComposedRoute, LPLinkMetadata, NSString;

@interface MKRouteLinkPresentationActivityProvider : MKRouteActivityProvider <UIActivityItemLinkPresentationSource> {

	GEOComposedRoute* _composedRoute;
	LPLinkMetadata* _cachedMetadata;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mapMetadataSpecialization;
-(id)activityViewControllerLinkPresentationMetadata:(id)arg1 ;
-(id)initWithSource:(id)arg1 destination:(id)arg2 composedRoute:(id)arg3 ;
@end

