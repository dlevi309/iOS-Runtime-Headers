/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class GEOSearchAttributionInfo, NSArray, NSString;

@interface GEOMapItemAttribution : NSObject {

	GEOSearchAttributionInfo* _info;
	NSArray* _attributionURLs;
	NSString* _yelpID;
	NSString* _poiID;

}

@property (nonatomic,readonly) NSString * providerID; 
@property (nonatomic,readonly) NSString * providerName; 
@property (nonatomic,readonly) NSArray * attributionURLs;                      //@synthesize attributionURLs=_attributionURLs - In the implementation block
@property (nonatomic,readonly) NSArray * attributionApps; 
@property (nonatomic,readonly) NSString * webBaseActionURL; 
@property (nonatomic,readonly) BOOL shouldOpenInAppStore; 
@property (nonatomic,readonly) BOOL requiresAttributionInCallout; 
@property (nonatomic,readonly) NSString * appAdamID; 
+(id)attributionWithDataAttribution:(id)arg1 searchInfo:(id)arg2 class:(Class)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 poiID:(id)arg3 ;
-(NSString *)providerName;
-(NSArray *)attributionApps;
-(NSString *)appAdamID;
-(NSString *)providerID;
-(NSArray *)attributionURLs;
-(NSString *)webBaseActionURL;
-(BOOL)shouldOpenInAppStore;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 yelpID:(id)arg3 ;
-(id)initWithSearchAttributionInfo:(id)arg1 attributionURLs:(id)arg2 ;
-(id)providerLogoPathForScale:(double)arg1 ;
-(id)providerSnippetLogoPathForScale:(double)arg1 ;
-(BOOL)requiresAttributionInCallout;
-(id)_yelpHTTPURLForRequirement:(int)arg1 withUID:(id)arg2 writeAReview:(BOOL)arg3 ;
@end

