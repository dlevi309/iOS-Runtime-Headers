/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPMediaControlsConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _shouldPreventAutorotation;
	BOOL _allowsNowPlayingApplicationLaunch;
	BOOL _sortByIsVideoRoute;
	long long _style;
	long long _initatorStyle;
	NSString* _routingContextUID;
	NSString* _presentingAppBundleID;
	NSString* _routeUID;
	CGRect _sourceRect;

}

@property (assign,nonatomic) long long style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long initatorStyle;                             //@synthesize initatorStyle=_initatorStyle - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID;                          //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (nonatomic,copy) NSString * presentingAppBundleID;                      //@synthesize presentingAppBundleID=_presentingAppBundleID - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventAutorotation;                      //@synthesize shouldPreventAutorotation=_shouldPreventAutorotation - In the implementation block
@property (assign,nonatomic) BOOL allowsNowPlayingApplicationLaunch;              //@synthesize allowsNowPlayingApplicationLaunch=_allowsNowPlayingApplicationLaunch - In the implementation block
@property (assign,nonatomic) BOOL sortByIsVideoRoute;                             //@synthesize sortByIsVideoRoute=_sortByIsVideoRoute - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                   //@synthesize sourceRect=_sourceRect - In the implementation block
@property (nonatomic,copy) NSString * routeUID;                                   //@synthesize routeUID=_routeUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(NSString *)routingContextUID;
-(NSString *)routeUID;
-(BOOL)sortByIsVideoRoute;
-(long long)initatorStyle;
-(void)setShouldPreventAutorotation:(BOOL)arg1 ;
-(void)setRouteUID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInitatorStyle:(long long)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(id)description;
-(CGRect)sourceRect;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)presentingAppBundleID;
-(BOOL)shouldPreventAutorotation;
-(void)setStyle:(long long)arg1 ;
-(void)setPresentingAppBundleID:(NSString *)arg1 ;
-(void)setSortByIsVideoRoute:(BOOL)arg1 ;
-(BOOL)allowsNowPlayingApplicationLaunch;
-(void)setAllowsNowPlayingApplicationLaunch:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(BOOL)isEqual:(id)arg1 ;
@end

