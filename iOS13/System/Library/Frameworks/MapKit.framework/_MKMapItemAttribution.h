/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class GEOMapItemAttribution, NSString, NSArray;

@interface _MKMapItemAttribution : NSObject {

	GEOMapItemAttribution* _geoAttribution;

}

@property (nonatomic,readonly) NSString * providerID; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs; 
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) BOOL requiresAttributionInCallout; 
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
@property (nonatomic,readonly) NSString * appAdamID; 
-(NSString *)providerName;
-(NSArray *)attributionApps;
-(NSString *)appAdamID;
-(NSString *)providerID;
-(NSArray *)attributionURLs;
-(BOOL)shouldOpenInAppStore;
-(BOOL)requiresAttributionInCallout;
-(id)providerLogoImageForScale:(double)arg1 ;
-(id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(BOOL)arg3 ;
-(id)providerSnippetLogoImageForScale:(double)arg1 ;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
@end

