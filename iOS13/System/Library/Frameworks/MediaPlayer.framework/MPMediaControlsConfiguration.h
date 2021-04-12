/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (assign,nonatomic) long long style;                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long initatorStyle;                             //@synthesize initatorStyle=_initatorStyle - In the implementation block
@property (nonatomic,copy) NSString * routingContextUID;                          //@synthesize routingContextUID=_routingContextUID - In the implementation block
@property (nonatomic,copy) NSString * presentingAppBundleID;                      //@synthesize presentingAppBundleID=_presentingAppBundleID - In the implementation block
@property (assign,nonatomic) BOOL shouldPreventAutorotation;                      //@synthesize shouldPreventAutorotation=_shouldPreventAutorotation - In the implementation block
@property (assign,nonatomic) BOOL allowsNowPlayingApplicationLaunch;              //@synthesize allowsNowPlayingApplicationLaunch=_allowsNowPlayingApplicationLaunch - In the implementation block
@property (assign,nonatomic) BOOL sortByIsVideoRoute;                             //@synthesize sortByIsVideoRoute=_sortByIsVideoRoute - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)setSortByIsVideoRoute:(BOOL)arg1 ;
-(NSString *)routingContextUID;
-(long long)initatorStyle;
-(void)setInitatorStyle:(long long)arg1 ;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(NSString *)presentingAppBundleID;
-(void)setPresentingAppBundleID:(NSString *)arg1 ;
-(BOOL)shouldPreventAutorotation;
-(void)setShouldPreventAutorotation:(BOOL)arg1 ;
-(BOOL)allowsNowPlayingApplicationLaunch;
-(void)setAllowsNowPlayingApplicationLaunch:(BOOL)arg1 ;
-(BOOL)sortByIsVideoRoute;
@end

