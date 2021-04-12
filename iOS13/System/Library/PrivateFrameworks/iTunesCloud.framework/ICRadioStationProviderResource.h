/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

