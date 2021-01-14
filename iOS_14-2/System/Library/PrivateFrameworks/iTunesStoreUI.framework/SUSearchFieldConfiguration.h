/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SUClientInterface;

@interface SUSearchFieldConfiguration : NSObject <NSCopying> {

	NSString* _cancelString;
	SUClientInterface* _clientInterface;
	CFDictionaryRef _hintURLs;
	long long _location;
	NSString* _placeholder;
	BOOL _rootViewOnly;
	CFDictionaryRef _searchURLs;
	NSString* _userDefaultsKey;
	double _width;
	double _widthLandscape;
	double _widthPortrait;

}

@property (nonatomic,readonly) NSString * cancelString;                              //@synthesize cancelString=_cancelString - In the implementation block
@property (getter=isRootViewOnly,nonatomic,readonly) BOOL rootViewOnly;              //@synthesize rootViewOnly=_rootViewOnly - In the implementation block
@property (nonatomic,readonly) long long location;                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * placeholderString;                         //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,readonly) NSString * userDefaultsKey;                           //@synthesize userDefaultsKey=_userDefaultsKey - In the implementation block
@property (nonatomic,readonly) double width;                                         //@synthesize width=_width - In the implementation block
+(id)defaultConfiguration;
+(id)defaultConfigurationWithClientInterface:(id)arg1 ;
-(NSString *)placeholderString;
-(double)width;
-(id)init;
-(long long)location;
-(NSString *)userDefaultsKey;
-(id)initWithDictionary:(id)arg1 ;
-(void)loadFromDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 clientInterface:(id)arg2 ;
-(id)searchURLRequestPropertiesForNetworkType:(long long)arg1 ;
-(BOOL)isRootViewOnly;
-(id)_initWithClientInterface:(id)arg1 ;
-(id)_urlRequestPropertiesForURLBagKey:(id)arg1 networkType:(long long)arg2 ;
-(void)_setHintURLsFromDictionary:(id)arg1 ;
-(long long)_locationForString:(id)arg1 ;
-(void)_setSearchURLsFromDictionary:(id)arg1 ;
-(id)_newQueryStringDictionaryForNetworkType:(long long)arg1 ;
-(CFDictionaryRef)_newURLsDictionaryWithDictionary:(id)arg1 ;
-(id)URLRequestPropertiesWithBaseURL:(id)arg1 forNetworkType:(long long)arg2 ;
-(id)hintsURLRequestPropertiesForNetworkType:(long long)arg1 ;
-(double)widthForOrientation:(long long)arg1 ;
-(NSString *)cancelString;
@end

