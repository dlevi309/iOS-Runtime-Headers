/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class SKCloudServiceController, NSMapTable, NSString;

@interface LPiTunesStoreInformation : NSObject {

	SKCloudServiceController* _cloudServiceController;
	NSMapTable* _changeHandlers;
	unsigned long long _capabilities;
	BOOL _hasUpdatedCapabilities;
	NSString* _storefrontIdentifier;

}

@property (readonly) unsigned long long capabilities; 
@property (copy,readonly) NSString * storefrontIdentifier; 
+(id)shared;
+(unsigned long long)_convertCapabilities:(unsigned long long)arg1 ;
+(id)_convertNewStorefrontIdentifier:(id)arg1 ;
-(unsigned long long)capabilities;
-(id)init;
-(NSString *)storefrontIdentifier;
-(void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unregisterForStoreAvailablityChangesWithToken:(id)arg1 ;
-(unsigned long long)userStateForMediaStorefrontIdentifier:(id)arg1 ;
-(void)_setStorefrontIdentifier:(id)arg1 ;
-(void)_storefrontDidChangeNotification;
-(void)_capabilitiesDidChangeNotification;
-(void)_notifyChangeHandlers;
-(void)_setCapabilities:(unsigned long long)arg1 ;
@end

