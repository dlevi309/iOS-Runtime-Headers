/*
* Generated on Monday, March 1, 2021 at 2:30:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/


@class NSString, NSData, NSError, NSDictionary, GEOResourceManifestDownload;

@interface GEOEnvironmentInfo : NSObject {

	NSString* _name;
	NSString* _displayName;
	NSString* _releaseName;
	long long _state;
	NSData* _manifestData;
	NSError* _lastLoadingError;
	NSDictionary* _originalDictionaryRepresentation;

}

@property (nonatomic,readonly) NSError * lastLoadingError;                                  //@synthesize lastLoadingError=_lastLoadingError - In the implementation block
@property (nonatomic,readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * releaseName;                                      //@synthesize releaseName=_releaseName - In the implementation block
@property (nonatomic,readonly) long long state;                                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) GEOResourceManifestDownload * resourceManifest; 
-(NSString *)name;
-(BOOL)isActive;
-(long long)state;
-(NSString *)displayName;
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)reloadManifestDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)urlDictionary;
-(id)_manifestURLString;
-(void)makeActive;
-(GEOResourceManifestDownload *)resourceManifest;
-(void)updateWithURLs:(id)arg1 ;
-(id)serviceURLs;
-(id)overrideURLs;
-(id)useProxyAuth;
-(NSString *)releaseName;
-(NSError *)lastLoadingError;
@end

