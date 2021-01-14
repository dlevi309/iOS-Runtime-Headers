/*
* Generated on Thursday, January 14, 2021 at 2:28:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROPlugInDelegate.h>
#import <libobjc.A.dylib/PROPlugInFirewallErrorHandler.h>
#import <libobjc.A.dylib/PROAPIAccessing.h>

@protocol PROPlugInRegistering, PROBundleHandlerDelegate, PROVersionedAPIAccess, PKPlugIn, PROPluginDynamicRegCompletion;
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
	id<PROPluginDynamicRegCompletion> setupCallbackObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBundle:(id)arg1 ;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(void)reportError:(id)arg1 ;
-(id)plugIns;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)apiForProtocol:(id)arg1 ;
-(id)apiManager;
-(id)pluginKitPlug;
-(void)addPlugIn:(id)arg1 ;
-(id)groupsDictionary;
-(void)setAPIManager:(id)arg1 ;
-(void)setPluginKitPlug:(id)arg1 ;
-(void)registerPlugIns;
-(void)setRegistrationCallbackObject:(id)arg1 ;
-(id)plugInGroupWithUUID:(CFUUIDRef)arg1 ;
-(BOOL)isEqualToBundleHandler:(id)arg1 ;
-(void)completeRegistrationWithGroups:(id*)arg1 plugIns:(id*)arg2 requestedProtocols:(id*)arg3 ;
-(id)principalClassInstance;
-(BOOL)_plugInHasReservedUUID:(id)arg1 ;
-(BOOL)dynamicPluginRequestedProtocolArray:(id*)arg1 groupArray:(id*)arg2 plugInArray:(id*)arg3 ;
-(BOOL)isPrincipalClassAvailable;
-(void)plugInCouldNotInitialize:(id)arg1 ;
-(void)plugIn:(id)arg1 didError:(id)arg2 ;
-(BOOL)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1 ;
-(id)apiManagerForPlugInInstances;
-(void)plugInFirewall:(id)arg1 receivedBadMessage:(SEL)arg2 ;
-(void)registerDynamicPlugInsAsynch:(id)arg1 ;
@end

