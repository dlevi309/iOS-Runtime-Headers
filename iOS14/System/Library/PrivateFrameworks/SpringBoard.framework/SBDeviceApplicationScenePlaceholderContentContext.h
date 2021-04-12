/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBScenePlaceholderContentContext.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol SBActivationSettings;
@class NSString, NSURL;

@interface SBDeviceApplicationScenePlaceholderContentContext : NSObject <SBScenePlaceholderContentContext, NSMutableCopying> {

	long long _layoutEnvironment;
	id<SBActivationSettings> _settings;
	NSString* _requestedLaunchIdentifier;
	NSURL* _url;
	BOOL _prefersLiveXIB;
	unsigned long long _preferredContentType;

}

@property (nonatomic,copy) id<SBActivationSettings> activationSettings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) long long layoutEnvironment;                            //@synthesize layoutEnvironment=_layoutEnvironment - In the implementation block
@property (nonatomic,copy) NSString * requestedLaunchIdentifier;                     //@synthesize requestedLaunchIdentifier=_requestedLaunchIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * url;                                              //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL prefersLiveXIB;                                    //@synthesize prefersLiveXIB=_prefersLiveXIB - In the implementation block
@property (assign,nonatomic) unsigned long long preferredContentType;                //@synthesize preferredContentType=_preferredContentType - In the implementation block
@property (nonatomic,readonly) BOOL canShowUserContent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrefersLiveXIB:(BOOL)arg1 ;
-(id)init;
-(void)setActivationSettings:(id<SBActivationSettings>)arg1 ;
-(long long)layoutEnvironment;
-(id)initWithActivationSettings:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSURL *)url;
-(void)setRequestedLaunchIdentifier:(NSString *)arg1 ;
-(id<SBActivationSettings>)activationSettings;
-(BOOL)canShowUserContent;
-(void)setPreferredContentType:(unsigned long long)arg1 ;
-(NSString *)requestedLaunchIdentifier;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setLayoutEnvironment:(long long)arg1 ;
-(BOOL)prefersLiveXIB;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)preferredContentType;
@end

