/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCompanionApp.h>

@class NSString, NSURL, NRDevice, NSArray;

@interface NTKCompanion3rdPartyApp : NTKCompanionApp {

	BOOL _installed;
	BOOL _galleryBundlesLoaded;
	NSString* _complicationClientIdentifier;
	NSURL* _urlToWatchKitBundle;
	NRDevice* _device;
	NSURL* _urlToComplicationBundle;
	NSArray* _supportedFamilies;
	NSString* _uniqueID;

}

@property (nonatomic,retain) NRDevice * device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSString * complicationClientIdentifier;              //@synthesize complicationClientIdentifier=_complicationClientIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * urlToComplicationBundle;                      //@synthesize urlToComplicationBundle=_urlToComplicationBundle - In the implementation block
@property (nonatomic,retain) NSURL * urlToWatchKitBundle;                          //@synthesize urlToWatchKitBundle=_urlToWatchKitBundle - In the implementation block
@property (nonatomic,retain) NSArray * supportedFamilies;                          //@synthesize supportedFamilies=_supportedFamilies - In the implementation block
@property (nonatomic,retain) NSString * uniqueID;                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (assign,getter=isInstalled,nonatomic) BOOL installed;                    //@synthesize installed=_installed - In the implementation block
@property (assign,nonatomic) BOOL galleryBundlesLoaded;                            //@synthesize galleryBundlesLoaded=_galleryBundlesLoaded - In the implementation block
+(id)_URLOfFirstItemWithExtension:(id)arg1 inDirectory:(id)arg2 ;
+(id)companion3rdPartyRemoteApp:(id)arg1 device:(id)arg2 ;
+(BOOL)_isValidApplication:(id)arg1 ;
+(BOOL)_isValidComplicationsInformation:(id)arg1 ;
+(id)_urlsToGalleryBundleInApplicationWithContainerBundleId:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)uniqueID;
-(BOOL)isInstalled;
-(NRDevice *)device;
-(void)install;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)setDevice:(NRDevice *)arg1 ;
-(void)setInstalled:(BOOL)arg1 ;
-(id)complication;
-(NSString *)complicationClientIdentifier;
-(NSArray *)supportedFamilies;
-(NSURL *)urlToComplicationBundle;
-(BOOL)applicationHasBeenUpdated:(id)arg1 ;
-(NSURL *)urlToWatchKitBundle;
-(id)_initWithDevice:(id)arg1 remoteApplication:(id)arg2 galleryBundles:(id)arg3 watchKitBundle:(id)arg4 ;
-(id)_initWithWatchAppId:(id)arg1 containerAppId:(id)arg2 complicationClientId:(id)arg3 ;
-(BOOL)_installStateFromAppConduitInstallState:(long long)arg1 ;
-(void)setUrlToComplicationBundle:(NSURL *)arg1 ;
-(void)setUrlToWatchKitBundle:(NSURL *)arg1 ;
-(void)setSupportedFamilies:(NSArray *)arg1 ;
-(void)setComplicationClientIdentifier:(NSString *)arg1 ;
-(id)appRegistrationDate;
-(BOOL)galleryBundlesLoaded;
-(void)setGalleryBundlesLoaded:(BOOL)arg1 ;
@end

