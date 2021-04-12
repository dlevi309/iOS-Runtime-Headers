/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROPlugInDelegate.h>
#import <libobjc.A.dylib/PROPlugInFirewallErrorHandler.h>
#import <libobjc.A.dylib/PROAPIAccessing.h>

@protocol PROPlugInRegistering, PROBundleHandlerDelegate, PROVersionedAPIAccess, PKPlugIn;
@class NSBundle, NSMutableArray, NSMutableDictionary, NSArray, PROPlugInFirewall, NSString;

@interface PROBundleHandler : NSObject <PROPlugInDelegate, PROPlugInFirewallErrorHandler, PROAPIAccessing> {

	NSBundle* bundle;
	NSMutableArray* plugIns;
	NSMutableDictionary* groups;
	id<PROPlugInRegistering> principalClassInstance;
	struct {
		unsigned canCreateInstances : 1;
		unsigned askedAboutCreatingInstances : 1;
		unsigned  : 30;
	}  bundleFlags;
	NSArray* requestedProtocols;
	id<PROBundleHandlerDelegate> delegate;
	id<PROVersionedAPIAccess> apiManager;
	PROPlugInFirewall* apiAccessPoint;
	id<PKPlugIn> pluginKitPlug;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithBundle:(id)arg1 ;
-(void)reportError:(id)arg1 ;
-(id)apiForProtocol:(id)arg1 ;
-(id)apiManager;
-(id)pluginKitPlug;
-(id)plugIns;
-(void)addPlugIn:(id)arg1 ;
-(void)setAPIManager:(id)arg1 ;
-(void)setPluginKitPlug:(id)arg1 ;
-(void)registerPlugIns;
-(id)groupsDictionary;
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1 ;
-(void)plugInCouldNotInitialize:(id)arg1 ;
-(void)plugIn:(id)arg1 didError:(id)arg2 ;
-(BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1 ;
-(id)apiManagerForPlugInInstances;
-(BOOL)isEqualToBundleHandler:(id)arg1 ;
-(id)principalClassInstance;
-(BOOL)_plugInHasReservedUUID:(id)arg1 ;
-(BOOL)isPrincipalClassAvailable;
-(void)plugInFirewall:(id)arg1 receivedBadMessage:(SEL)arg2 ;
@end

