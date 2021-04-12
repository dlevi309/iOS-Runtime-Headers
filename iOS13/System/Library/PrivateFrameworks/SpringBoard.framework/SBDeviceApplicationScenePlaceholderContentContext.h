/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canShowUserContent; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(id<SBActivationSettings>)activationSettings;
-(void)setActivationSettings:(id<SBActivationSettings>)arg1 ;
-(id)initWithActivationSettings:(id)arg1 ;
-(void)setPrefersLiveXIB:(BOOL)arg1 ;
-(long long)layoutEnvironment;
-(void)setLayoutEnvironment:(long long)arg1 ;
-(BOOL)prefersLiveXIB;
-(unsigned long long)preferredContentType;
-(void)setPreferredContentType:(unsigned long long)arg1 ;
-(NSString *)requestedLaunchIdentifier;
-(void)setRequestedLaunchIdentifier:(NSString *)arg1 ;
-(BOOL)canShowUserContent;
@end

