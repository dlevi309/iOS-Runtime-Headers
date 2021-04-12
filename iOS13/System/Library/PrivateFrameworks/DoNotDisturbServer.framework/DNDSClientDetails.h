/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)_detailsForBundleInfoDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)identifiers;
-(NSString *)clientIdentifier;
-(BOOL)isResolutionContextAssumingDeviceUILocked;
-(BOOL)isUserInteractionClient;
-(BOOL)isSyncSuppressedClient;
-(BOOL)isPersistentAssertionClient;
-(id)initWithClientIdentifier:(id)arg1 identifiers:(id)arg2 resolutionContextAssumingDeviceUILocked:(BOOL)arg3 userInteractionClient:(BOOL)arg4 persistentAssertionClient:(BOOL)arg5 syncSuppressedClient:(BOOL)arg6 ;
@end

