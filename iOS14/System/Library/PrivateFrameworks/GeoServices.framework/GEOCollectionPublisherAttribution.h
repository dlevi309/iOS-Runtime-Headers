/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSURL, NSString;

@interface GEOCollectionPublisherAttribution : NSObject {

	unsigned _iconIdentifier;
	unsigned _logoIdentifier;
	unsigned _logoCenteredIdentifier;
	NSURL* _websiteURL;
	NSString* _applicationAdamId;
	NSString* _displayName;
	NSString* _subtitle;
	NSString* _themeColorLightMode;
	NSString* _themeColorDarkMode;

}

@property (nonatomic,readonly) NSURL * websiteURL;                           //@synthesize websiteURL=_websiteURL - In the implementation block
@property (nonatomic,readonly) NSString * applicationAdamId;                 //@synthesize applicationAdamId=_applicationAdamId - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                       //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned iconIdentifier;                      //@synthesize iconIdentifier=_iconIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned logoIdentifier;                      //@synthesize logoIdentifier=_logoIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned logoCenteredIdentifier;              //@synthesize logoCenteredIdentifier=_logoCenteredIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * themeColorLightMode;               //@synthesize themeColorLightMode=_themeColorLightMode - In the implementation block
@property (nonatomic,readonly) NSString * themeColorDarkMode;                //@synthesize themeColorDarkMode=_themeColorDarkMode - In the implementation block
+(id)bestAttributionForPublisher:(id)arg1 ;
+(id)bestAttributionForPublisher:(id)arg1 preferredLanguages:(id)arg2 ;
-(NSString *)subtitle;
-(unsigned)iconIdentifier;
-(id)initWithPublisherAttributionSource:(id)arg1 preferredLanguages:(id)arg2 ;
-(NSString *)applicationAdamId;
-(NSString *)themeColorLightMode;
-(NSString *)themeColorDarkMode;
-(unsigned)logoIdentifier;
-(NSURL *)websiteURL;
-(unsigned)logoCenteredIdentifier;
-(NSString *)displayName;
@end

