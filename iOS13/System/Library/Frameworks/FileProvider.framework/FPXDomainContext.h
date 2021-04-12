/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


@protocol OS_os_log;
@class FPXExtensionContext, NSFileProviderExtension, NSFileProviderDomain, NSObject, FPXSpotlightIndexer;

@interface FPXDomainContext : NSObject {

	BOOL _usesFPFS;
	unsigned long long _extensionCapabilities;
	FPXExtensionContext* _extensionContext;
	NSFileProviderExtension* _vendorInstance;
	NSFileProviderDomain* _domain;
	NSObject*<OS_os_log> _log;
	FPXSpotlightIndexer* _spotlightIndexer;

}

@property (nonatomic,__weak,readonly) FPXExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (nonatomic,readonly) NSFileProviderExtension * vendorInstance;                   //@synthesize vendorInstance=_vendorInstance - In the implementation block
@property (nonatomic,readonly) NSFileProviderDomain * domain;                              //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL usesFPFS;                                              //@synthesize usesFPFS=_usesFPFS - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                     //@synthesize log=_log - In the implementation block
@property (nonatomic,readonly) FPXSpotlightIndexer * spotlightIndexer;                     //@synthesize spotlightIndexer=_spotlightIndexer - In the implementation block
@property (nonatomic,readonly) unsigned long long extensionCapabilities;                   //@synthesize extensionCapabilities=_extensionCapabilities - In the implementation block
-(void)invalidate;
-(NSFileProviderDomain *)domain;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(FPXExtensionContext *)extensionContext;
-(id)initWithVendorInstance:(id)arg1 domain:(id)arg2 extensionContext:(id)arg3 usesFPFS:(BOOL)arg4 ;
-(FPXSpotlightIndexer *)spotlightIndexer;
-(NSFileProviderExtension *)vendorInstance;
-(void)prepareForDomainRemovalWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)itemIDFromVendorItemID:(id)arg1 ;
-(id)internalErrorFromVendorError:(id)arg1 ;
-(id)itemFromVendorItem:(id)arg1 ;
-(BOOL)usesFPFS;
-(id)itemIDsFromVendorItemIDs:(id)arg1 ;
-(void)updateCapabilities;
-(unsigned long long)extensionCapabilities;
-(id)itemsFromVendorItems:(id)arg1 ;
@end

