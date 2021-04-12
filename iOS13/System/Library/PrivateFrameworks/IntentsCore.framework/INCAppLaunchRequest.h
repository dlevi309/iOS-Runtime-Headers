/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
*/

#import <IntentsCore/IntentsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSURL, NSUserActivity;

@interface INCAppLaunchRequest : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	NSDictionary* _options;
	NSURL* _URL;
	NSUserActivity* _userActivity;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL;                                                 //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSUserActivity * userActivity;                                    //@synthesize userActivity=_userActivity - In the implementation block
@property (getter=isSupportedInCarPlay,nonatomic,readonly) BOOL supportedInCarPlay; 
+(void)initialize;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)options;
-(NSString *)bundleIdentifier;
-(NSURL *)URL;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(NSUserActivity *)userActivity;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithInteraction:(id)arg1 userActivity:(id)arg2 inBackground:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithBundleIdentifier:(id)arg1 options:(id)arg2 URL:(id)arg3 userActivity:(id)arg4 ;
-(id)initWithIntent:(id)arg1 userActivity:(id)arg2 inBackground:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithAudioCallIntentForCarousel:(id)arg1 error:(id*)arg2 ;
-(id)initWithSockPuppetApplicationProxy:(id)arg1 userActivity:(id)arg2 ;
-(BOOL)isSupportedInCarPlay;
-(void)performWithService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observeForAppLaunchWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

