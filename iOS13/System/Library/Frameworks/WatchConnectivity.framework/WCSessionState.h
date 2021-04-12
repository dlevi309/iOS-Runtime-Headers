/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSSet, NSURL;

@interface WCSessionState : NSObject <NSSecureCoding> {

	BOOL _reachable;
	BOOL _paired;
	BOOL _appInstalled;
	BOOL _complicationEnabled;
	BOOL _standalone;
	BOOL _companionAppInstalled;
	BOOL _iOSDeviceNeedsFirstUnlock;
	unsigned long long _remainingComplicationUserInfoTransfers;
	NSString* _pairingID;
	NSSet* _pairedDevicesPairingIDs;
	NSString* _appInstallationID;

}

@property (getter=isReachable,readonly) BOOL reachable;                                      //@synthesize reachable=_reachable - In the implementation block
@property (getter=isPaired,readonly) BOOL paired;                                            //@synthesize paired=_paired - In the implementation block
@property (getter=isAppInstalled,readonly) BOOL appInstalled;                                //@synthesize appInstalled=_appInstalled - In the implementation block
@property (getter=isComplicationEnabled,readonly) BOOL complicationEnabled;                  //@synthesize complicationEnabled=_complicationEnabled - In the implementation block
@property (getter=isStandaloneApp,readonly) BOOL standalone;                                 //@synthesize standalone=_standalone - In the implementation block
@property (getter=isCompanionAppInstalled,readonly) BOOL companionAppInstalled;              //@synthesize companionAppInstalled=_companionAppInstalled - In the implementation block
@property (readonly) unsigned long long remainingComplicationUserInfoTransfers;              //@synthesize remainingComplicationUserInfoTransfers=_remainingComplicationUserInfoTransfers - In the implementation block
@property (readonly) BOOL iOSDeviceNeedsFirstUnlock;                                         //@synthesize iOSDeviceNeedsFirstUnlock=_iOSDeviceNeedsFirstUnlock - In the implementation block
@property (copy,readonly) NSString * pairingID;                                              //@synthesize pairingID=_pairingID - In the implementation block
@property (copy,readonly) NSSet * pairedDevicesPairingIDs;                                   //@synthesize pairedDevicesPairingIDs=_pairedDevicesPairingIDs - In the implementation block
@property (copy,readonly) NSString * appInstallationID;                                      //@synthesize appInstallationID=_appInstallationID - In the implementation block
@property (copy,readonly) NSURL * watchDirectoryURL; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isReachable;
-(BOOL)isPaired;
-(BOOL)isAppInstalled;
-(NSString *)pairingID;
-(id)initWithReachable:(BOOL)arg1 paired:(BOOL)arg2 appInstalled:(BOOL)arg3 complicationEnabled:(BOOL)arg4 remainingComplicationUserInfoTransfers:(unsigned long long)arg5 iOSDeviceNeedsFirstUnlock:(BOOL)arg6 pairingID:(id)arg7 pairedDevicesPairingIDs:(id)arg8 appInstallationID:(id)arg9 standaloneApp:(BOOL)arg10 companionAppInstalled:(BOOL)arg11 ;
-(BOOL)isComplicationEnabled;
-(unsigned long long)remainingComplicationUserInfoTransfers;
-(NSSet *)pairedDevicesPairingIDs;
-(NSString *)appInstallationID;
-(id)initWithReachable:(BOOL)arg1 iOSDeviceNeedsFirstUnlock:(BOOL)arg2 activePairingID:(id)arg3 standaloneApp:(BOOL)arg4 companionAppInstalled:(BOOL)arg5 ;
-(id)initWithReachable:(BOOL)arg1 paired:(BOOL)arg2 appInstalled:(BOOL)arg3 complicationEnabled:(BOOL)arg4 remainingComplicationUserInfoTransfers:(unsigned long long)arg5 activePairingID:(id)arg6 pairedDevicesPairingIDs:(id)arg7 appInstallationID:(id)arg8 ;
-(NSURL *)watchDirectoryURL;
-(BOOL)isStandaloneApp;
-(BOOL)isCompanionAppInstalled;
-(BOOL)iOSDeviceNeedsFirstUnlock;
@end

