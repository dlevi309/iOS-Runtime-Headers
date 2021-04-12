/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface DNDSClientDetails : NSObject <NSCopying> {

	BOOL _resolutionContextAssumingDeviceUILocked;
	BOOL _userInteractionClient;
	BOOL _persistentAssertionClient;
	BOOL _syncSuppressedClient;
	NSString* _clientIdentifier;
	NSArray* _identifiers;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;                                                                           //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * identifiers;                                                                                 //@synthesize identifiers=_identifiers - In the implementation block
@property (getter=isResolutionContextAssumingDeviceUILocked,nonatomic,readonly) BOOL resolutionContextAssumingDeviceUILocked;              //@synthesize resolutionContextAssumingDeviceUILocked=_resolutionContextAssumingDeviceUILocked - In the implementation block
@property (getter=isUserInteractionClient,nonatomic,readonly) BOOL userInteractionClient;                                                  //@synthesize userInteractionClient=_userInteractionClient - In the implementation block
@property (getter=isPersistentAssertionClient,nonatomic,readonly) BOOL persistentAssertionClient;                                          //@synthesize persistentAssertionClient=_persistentAssertionClient - In the implementation block
@property (getter=isSyncSuppressedClient,nonatomic,readonly) BOOL syncSuppressedClient;                                                    //@synthesize syncSuppressedClient=_syncSuppressedClient - In the implementation block
+(id)detailsForBundleAtURL:(id)arg1 ;
+(id)detailsForClientIdentifier:(id)arg1 applicationBundleURL:(id)arg2 ;
+(id)_detailsForClientIdentifier:(id)arg1 bundleInfoDictionary:(id)arg2 ;
-(NSArray *)identifiers;
-(id)initWithClientIdentifier:(id)arg1 identifiers:(id)arg2 resolutionContextAssumingDeviceUILocked:(BOOL)arg3 userInteractionClient:(BOOL)arg4 persistentAssertionClient:(BOOL)arg5 syncSuppressedClient:(BOOL)arg6 ;
-(BOOL)isResolutionContextAssumingDeviceUILocked;
-(BOOL)isSyncSuppressedClient;
-(NSString *)clientIdentifier;
-(BOOL)isPersistentAssertionClient;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isUserInteractionClient;
@end

