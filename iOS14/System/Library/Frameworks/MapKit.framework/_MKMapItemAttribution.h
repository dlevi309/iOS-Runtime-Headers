/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)providerID;
-(id)initWithGEOMapItemAttribution:(id)arg1 ;
-(NSArray *)attributionApps;
-(BOOL)requiresAttributionInCallout;
-(id)providerLogoImageForScale:(double)arg1 ;
-(BOOL)shouldOpenInAppStore;
-(id)providerSnippetLogoImageForScale:(double)arg1 ;
-(NSString *)appAdamID;
-(id)providerImageAtPath:(id)arg1 scale:(double)arg2 isTemplate:(BOOL)arg3 ;
-(NSArray *)attributionURLs;
-(NSString *)providerName;
@end

