/*
* Generated on Thursday, January 14, 2021 at 2:21:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSData, NSError, NSDictionary, GEOResourceManifestDownload;

@interface GEOEnvironmentInfo : NSObject {

	NSString* _name;
	NSString* _displayName;
	NSString* _releaseName;
	NSString* _actualName;
	long long _state;
	NSData* _manifestData;
	NSError* _lastLoadingError;
	NSDictionary* _originalDictionaryRepresentation;

}

@property (nonatomic,readonly) NSError * lastLoadingError;                                  //@synthesize lastLoadingError=_lastLoadingError - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * releaseName;                                      //@synthesize releaseName=_releaseName - In the implementation block
@property (nonatomic,readonly) NSString * actualName;                                       //@synthesize actualName=_actualName - In the implementation block
@property (nonatomic,readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) GEOResourceManifestDownload * resourceManifest; 
-(BOOL)isActive;
-(void)makeActive;
-(id)serviceURLs;
-(NSString *)releaseName;
-(NSString *)actualName;
-(id)overrideURLs;
-(id)useProxyAuth;
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)reloadManifestDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)urlDictionary;
-(id)_manifestURLString;
-(GEOResourceManifestDownload *)resourceManifest;
-(void)updateWithURLs:(id)arg1 ;
-(NSError *)lastLoadingError;
-(NSString *)name;
-(long long)state;
-(NSString *)displayName;
@end

