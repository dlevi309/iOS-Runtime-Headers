/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying> {

	NSNumber* _itemIdentifier;
	NSString* _podcastFeedURLIdentifier;
	NSString* _bundleIdentifier;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * podcastFeedURLIdentifier;              //@synthesize podcastFeedURLIdentifier=_podcastFeedURLIdentifier - In the implementation block
-(NSNumber *)itemIdentifier;
-(id)numberValue;
-(id)initWithLongLong:(long long)arg1 ;
-(NSString *)bundleIdentifier;
-(id)stringValue;
-(id)description;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithNumber:(id)arg1 ;
-(long long)longLongValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPodcastFeedURLIdentifier:(NSString *)arg1 ;
-(id)initWithPodcastFeedURL:(id)arg1 ;
-(NSString *)podcastFeedURLIdentifier;
@end

