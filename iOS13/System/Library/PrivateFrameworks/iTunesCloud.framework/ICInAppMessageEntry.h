/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSMutableDictionary, NSObject, ICIAMApplicationMessage, NSDictionary;

@interface ICInAppMessageEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _bundleIdentifier;
	NSMutableDictionary* _metadata;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _resourceCache;
	BOOL _shouldDownloadResources;
	BOOL _didCacheRequiredResources;
	ICIAMApplicationMessage* _applicationMessage;

}

@property (nonatomic,readonly) ICIAMApplicationMessage * applicationMessage;              //@synthesize applicationMessage=_applicationMessage - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                               //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (assign,nonatomic) BOOL shouldDownloadResources;                                //@synthesize shouldDownloadResources=_shouldDownloadResources - In the implementation block
@property (assign,nonatomic) BOOL didCacheRequiredResources;                              //@synthesize didCacheRequiredResources=_didCacheRequiredResources - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDictionary *)metadata;
-(void)clearCachedResources;
-(ICIAMApplicationMessage *)applicationMessage;
-(id)initWithApplicationMessage:(id)arg1 bundleIdentifier:(id)arg2 ;
-(BOOL)shouldDownloadResources;
-(void)setShouldDownloadResources:(BOOL)arg1 ;
-(id)cachedLocationForResourceWithIdentifier:(id)arg1 ;
-(void)setCacheLocation:(id)arg1 forResourceWithIdentifier:(id)arg2 ;
-(void)setDidCacheRequiredResources:(BOOL)arg1 ;
-(BOOL)didCacheRequiredResources;
-(void)updateMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)allCachedResourceLocations;
@end

