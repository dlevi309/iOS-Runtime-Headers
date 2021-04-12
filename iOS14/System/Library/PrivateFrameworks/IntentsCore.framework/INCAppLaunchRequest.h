/*
* Generated on Thursday, January 14, 2021 at 2:24:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSUserActivity *)userActivity;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(void)performWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDictionary *)options;
-(id)description;
-(NSURL *)URL;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithInteraction:(id)arg1 userActivity:(id)arg2 inBackground:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithIntent:(id)arg1 userActivity:(id)arg2 inBackground:(BOOL)arg3 error:(id*)arg4 ;
-(id)initWithAudioCallIntentForCarousel:(id)arg1 error:(id*)arg2 ;
-(id)initWithBundleIdentifier:(id)arg1 options:(id)arg2 URL:(id)arg3 userActivity:(id)arg4 ;
-(BOOL)isSupportedInCarPlay;
-(void)performWithService:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observeForAppLaunchWithTimeout:(double)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

