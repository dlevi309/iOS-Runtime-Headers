/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/

#import <VirtualGarage/VirtualGarage-Structs.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>
#import <libobjc.A.dylib/VGOEMApplicationFinding.h>

@protocol OS_dispatch_queue, VGOEMApplicationFinderUpdates;
@class NSSet, NSObject, NSDictionary, NSMutableDictionary, NSString;

@interface VGOEMApplicationFinder : NSObject <LSApplicationWorkspaceObserverProtocol, GEOConfigChangeListenerDelegate, VGOEMApplicationFinding> {

	NSSet* _requiredIntents;
	NSObject*<OS_dispatch_queue> _queue;
	id<VGOEMApplicationFinderUpdates> _delegate;
	NSSet* _disabledAppIdentifiers;
	NSDictionary* _whitelist;
	NSMutableDictionary* _applications;

}

@property (nonatomic,retain) NSSet * disabledAppIdentifiers;                                 //@synthesize disabledAppIdentifiers=_disabledAppIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * whitelist;                                       //@synthesize whitelist=_whitelist - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * applications;                             //@synthesize applications=_applications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VGOEMApplicationFinderUpdates> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(NSDictionary *)whitelist;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_VG2*)arg1 ;
-(id)_applicationRecordForBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)setApplications:(NSMutableDictionary *)arg1 ;
-(id<VGOEMApplicationFinderUpdates>)delegate;
-(void)setDisabledAppIdentifiers:(NSSet *)arg1 ;
-(void)findOEMApplications;
-(id)_whitelistPayload;
-(NSSet *)disabledAppIdentifiers;
-(void)setWhitelist:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)applications;
-(void)setDelegate:(id<VGOEMApplicationFinderUpdates>)arg1 ;
-(void)applicationsDidInstall:(id)arg1 ;
-(BOOL)_addOEMApplicationForApplicationRecordIfNeeded:(id)arg1 ;
-(BOOL)_removeOEMApplicationForBundleIdentifier:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)dealloc;
@end

