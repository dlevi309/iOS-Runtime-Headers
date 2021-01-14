/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSURL, NSString;

@interface ICRadioStationProviderResource : NSObject {

	NSURL* _url;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(NSString *)bundleIdentifier;
-(NSURL *)url;
-(id)initWithRadioStationProviderResourceDictionary:(id)arg1 ;
@end

